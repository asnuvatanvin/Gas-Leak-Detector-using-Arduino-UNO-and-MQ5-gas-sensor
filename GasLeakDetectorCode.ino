int red=2;
int green=3;
int buzzer=4;
int input=A0;
int gas_level = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(input,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Serial.println(val);
  if(val >= gas_level)
  {
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(buzzer,HIGH);
    Serial.println("Gas Leaking");
  }
  else
  {
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(buzzer,LOW);
    Serial.println("Normal");
  }
}
