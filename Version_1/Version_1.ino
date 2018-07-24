#define button 3

int state = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if((millis>timer1)&&((state ==4 )||(state == 5))){
  state = 0;
}

if((state == 0)&&(digitalRead(button) == 1)){
  state = 1;
}

if((state == 1)&&(digitalRead(button) == 1)){
  state = 2;
}

if((state == 2)&&(digitalRead(button) == 1)){
  state = 3;
}

if((state == 3)&&(digitalRead(button) == 1)){
  state = 4;
}

if((state == 3)&&(digitalRead(button) == 2)){
  state = 5;
}
}
