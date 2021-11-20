int LMP = 7;
int RMP = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(LMP,OUTPUT);
pinMode(RMP,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  String Direction =Serial.readString();
  if(Direction == "S")
  {
    Serial.println("Straight command Given");
    digitalWrite(LMP,HIGH);
    digitalWrite(RMP,HIGH);
    }
  else if(Direction == "L")
  {
    Serial.println("Left command Given");
    digitalWrite(LMP,LOW);
    digitalWrite(RMP,HIGH);
    }

  else if(Direction == "R")
  {
    Serial.println("Right command Given");
    digitalWrite(LMP,HIGH);
    digitalWrite(RMP,LOW);
    }
  }
}
