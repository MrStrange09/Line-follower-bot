#define l A5
#define m A1
#define r A0

void setup() {
  pinMode(l,INPUT);
  pinMode(m,INPUT);
  pinMode(r,INPUT);
  Serial.begin(9600);
  }

void loop(){
  Serial.println(digitalRead(l));
  Serial.println(digitalRead(m));
  Serial.println(digitalRead(r));

  if(digitalRead(lefts)==1 && digitalRead(rights)==1 && digitalRead(middle)==0){
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  } 
  else if(digitalRead(lefts)==0 && digitalRead(rights)==1 && digitalRead(middle)==1){
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
  }
  else if(digitalRead(lefts)==1 && digitalRead(rights)==0 && digitalRead(middle)==1){
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
  }
   
}  
