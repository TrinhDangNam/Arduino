#define DATA 8 //DS
#define LATCH 7 //ST_CP
#define CLOCK 9 //SH_CP
int giaima7doan[]={252,96,218,242,102,182,190,224,254,246};
                 // 0   1  2   3   4   5   6   7   8   9
void setup() 
{
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}

void loop() 
{
  for( int i = 0 ; i <= 9 ; i++)
  {
    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLOCK, LSBFIRST, giaima7doan[i]);
    digitalWrite(LATCH, HIGH);
    delay(500);
  }
}
