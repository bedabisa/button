int button1   = D2;
int button2   = D4;
int led1      = D1;

int buttonState   = 0;
int buttonState2  = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState   = digitalRead(button1);
  buttonState2  = digitalRead(button2);

  //Gerbang Logika OR
  if(buttonState || buttonState2 == HIGH){
    digitalWrite(led1,HIGH);  
  }else{
    digitalWrite(led1,LOW);  
  }
}
