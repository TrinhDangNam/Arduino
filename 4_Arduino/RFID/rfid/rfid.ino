/* Typical pin layout used:

 * -----------------------------------------------------------------------------------------

 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino

 *             Reader/PCD   Uno           Mega      Nano v3    Leonardo/Micro   Pro Micro

 * Signal      Pin          Pin           Pin       Pin        Pin              Pin

 * -----------------------------------------------------------------------------------------

 * RST/Reset   RST          2             5         D9         RESET/ICSP-5     RST

 * SPI SS      SDA(SS)      3            53        D10        10               10

 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16

 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14

 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15

 */

 

#include <SPI.h>

#include <MFRC522.h>

#include<LiquidCrystal.h>

 

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

#define SS_PIN 3

#define RST_PIN 2

 

MFRC522 rfid(SS_PIN, RST_PIN); // Instance of the class

 

MFRC522::MIFARE_Key key;

 

// khai bao mang chua gia tri ID

byte nuidPICC[4];

 

void setup() {

  lcd.begin(16,2);

  Serial.begin(9600);

  SPI.begin(); // Init SPI bus

  rfid.PCD_Init(); // Init MFRC522

}

 

void loop() {

    lcd.setCursor(0,0);

    lcd.print("Khong co the    ");

    lcd.setCursor(0,1);

    lcd.print("                ");

 

  // tim kiem the moi

  if ( ! rfid.PICC_IsNewCardPresent())

    return;

 

  // Xac nhan  neu NUID da duoc doc

  if ( ! rfid.PICC_ReadCardSerial())

    return;

    Serial.println(F("A new card has been detected."));

    // Doc gia tri ID va ghi ra

   

    for (byte i = 0; i < 4; i++) {

      nuidPICC[i] = rfid.uid.uidByte[i];

    }

    // so sanh ID the tung nguoi

if(nuidPICC[0] == 99 && nuidPICC[1]== 7 && nuidPICC[2]== 147 && nuidPICC[3]==  244){

 

    lcd.setCursor(0,0);

    lcd.print("LE TUAN ANH   ");

    lcd.setCursor(0,1);

    lcd.print("ID: ");

    for(int i = 0; i <4 ; i++){

     

      disPlay(nuidPICC[i], i);

      }

    }

    if(nuidPICC[0] == 101 && nuidPICC[1]== 82 && nuidPICC[2]== 17 && nuidPICC[3]==  2){

 

    lcd.setCursor(0,0);

    lcd.print("BUI NGOC NHA   ");

    lcd.setCursor(0,1);

    lcd.print("ID: ");

    for(int i = 0; i <4 ; i++){

     

      disPlay(nuidPICC[i], i);

      }

    }

    if(nuidPICC[0] == 229 && nuidPICC[1]== 15 && nuidPICC[2]== 14 && nuidPICC[3]==  2){

 

    lcd.setCursor(0,0);

    lcd.print("PHAM VAN LAP   ");

    lcd.setCursor(0,1);

    lcd.print("ID: ");

    for(int i = 0; i <4 ; i++){

     

      disPlay(nuidPICC[i], i);

      }

    }

      delay(5000);

    lcd.setCursor(0,0);

    lcd.print("               ");

    lcd.setCursor(0,1);

    lcd.print("               ");

     

}

// hien thi ID

void disPlay(byte number,int i){    

      byte bitHigh = number/16;

      byte bitLow = number%16;

      lcd.setCursor((4 +3*i),1);

      convert(bitHigh); 

      lcd.setCursor((5 +3*i),1);

      convert(bitLow); }

//  chuyen sang he 16

void convert(byte number){

  if(number < 10) lcd.print(number);

    if(number == 10) lcd.print("A");

      if(number == 11) lcd.print("B");

        if(number == 12) lcd.print("C");

          if(number == 13) lcd.print("D");

            if(number == 14) lcd.print("E");

              if(number == 15) lcd.print("F");    

}
