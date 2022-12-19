#define apin 12
#define bpin 11
#define cpin 10
#define dpin 9
#define epin 8
#define fpin 7
#define gpin 6
#define hpin 5
#define ipin 4

#define jpin 3
#define kpin 2
#define lpin 1


void setup() {
    pinMode(apin, OUTPUT);
    pinMode(bpin, OUTPUT);
    pinMode(cpin, OUTPUT);
    pinMode(dpin, OUTPUT);
    pinMode(epin, OUTPUT);
    pinMode(fpin, OUTPUT);
    pinMode(gpin, OUTPUT);
    pinMode(hpin, OUTPUT);
    pinMode(ipin, OUTPUT);
    
    pinMode(jpin, OUTPUT);
    pinMode(kpin, OUTPUT);
    pinMode(kpin, OUTPUT);
    
}
void loop() {
    //1
    analogWrite (apin, 255);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 255);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //2
    analogWrite (apin, 0);
    analogWrite (bpin, 255);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 255);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //3
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 255);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 255);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //4
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 255);
    analogWrite (epin, 255);
    analogWrite (fpin, 255);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //5
    analogWrite (apin, 255);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 255);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //6
    analogWrite (apin, 0);
    analogWrite (bpin, 255);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 255);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //7
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 255);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 255);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    //8
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 255);
    analogWrite (epin, 255);
    analogWrite (fpin, 255);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 255);
    analogWrite (lpin, 255);
    delay (150);
    
    
    //9
    analogWrite (apin, 255);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 255);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //10
    analogWrite (apin, 0);
    analogWrite (bpin, 255);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 255);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //11
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 255);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 255);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //12
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 255);
    analogWrite (epin, 255);
    analogWrite (fpin, 255);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //13
    analogWrite (apin, 255);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 255);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //14
    analogWrite (apin, 0);
    analogWrite (bpin, 255);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 255);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //15
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 255);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 255);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //16
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 255);
    analogWrite (epin, 255);
    analogWrite (fpin, 255);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 255);
    delay (150);
    
    //17
    analogWrite (apin, 255);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 255);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //18
    analogWrite (apin, 0);
    analogWrite (bpin, 255);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 255);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //19
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 255);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 255);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //20
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 255);
    analogWrite (epin, 255);
    analogWrite (fpin, 255);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //21
    analogWrite (apin, 255);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 255);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //22
    analogWrite (apin, 0);
    analogWrite (bpin, 255);
    analogWrite (cpin, 0);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 0);
    analogWrite (hpin, 255);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //23
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 255);
    analogWrite (dpin, 0);
    analogWrite (epin, 255);
    analogWrite (fpin, 0);
    analogWrite (gpin, 255);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    //24
    analogWrite (apin, 0);
    analogWrite (bpin, 0);
    analogWrite (cpin, 0);
    analogWrite (dpin, 255);
    analogWrite (epin, 255);
    analogWrite (fpin, 255);
    analogWrite (gpin, 0);
    analogWrite (hpin, 0);
    analogWrite (ipin, 0);
    
    analogWrite (jpin, 0);
    analogWrite (kpin, 0);
    analogWrite (lpin, 0);
    delay (150);
    
    }