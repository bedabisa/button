int button1   = D2;
int led1      = D1;

int buttonState   = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState   = digitalRead(button1);

  if(buttonState == HIGH){
    digitalWrite(led1,HIGH);  
  }else{
    digitalWrite(led1,LOW);  
  }

}
