#define none 0
#define g1 786
#define g2 882
#define g3 990
#define g4 1049
#define g5 1178
#define g6 1322
#define g7 1484

int tune[]=
{
  g1,g2,
  g3,g5,g5,g6,
  g5,g3,g1,g2,
  g3,g3,g2,g1,
  g2,g1,g2,
  g3,g5,g5,g6,

  g5,g3,g1,g2,
  g3,g3,g2,g2,
  g1,g1,g2,
  g3,g5,g5,g6,
  g5,g3,g1,g2,
  g3,g3,g2,g1,

  g2,none,g1,g2,
  g3,g5,g5,g6,
  g5,g3,g1,g2,
  g3,g3,g3,g3,g2,g2,
  g1,none,
  g4,g4,

  g6,g6,g6,
  g5,g5,g3,g1,
  g2,none,g1,g2,
  g3,g5,g5,g6,
  g5,g3,g1,g2,
  g3,g3,g2,g2,

  g1,
};
float durt[]=
{
  1,1,
  2,2,3,1,
  2,2,3,1,
  2,2,2,2,
  6,1,1,
  2,2,3,1,

  2,2,3,1,
  2,2,2,2,
  6,1,1,
  2,2,3,1,
  2,2,3,1,
  2,2,2,2,
  
  4,2,1,1,
  2,2,2,2,
  3,1,3,1,
  1,1,1,1,3,1,
  4,4,
  4,4,

  2,1,2,
  3,1,2,2,
  4,2,1,1,
  2,2,3,1,
  2,2,3,1,
  2,2,3,1,

  4,
};
int length;
int tonepin=8;
void setup()
{
  pinMode(tonepin,OUTPUT);
  length=sizeof(tune)/sizeof(tune[0]);
}
void loop()
{
  for(int x=0;x<length;x++)
  {
    tone(tonepin,tune[x]);
    delay(150*durt[x]);
    noTone(tonepin);
  }
  delay(2000);
}
