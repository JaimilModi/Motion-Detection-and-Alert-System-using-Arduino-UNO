const int motionpin=A0;
const int ledpin=13;
const int buzzpin=12;
int motionsensvalue=0;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(motionpin,INPUT);
  pinMode(buzzpin,OUTPUT);
 
}

void loop() {
  motionsensvalue=analogRead(motionpin);
  Serial.println(motionsensvalue);
    if (motionsensvalue>=1){
      digitalWrite(ledpin,HIGH);
      tone(buzzpin,100);
      Serial.println("Motion Occurs!");
      delay(200);
    }
    else {
      digitalWrite(ledpin,LOW);
      noTone(buzzpin);
      Serial.println("Motion Not Occurs.");
    }
}
