int LDR = A0;
int led1 = 9;
int led2 = 10;
int led3 = 11;
int led4 = 12;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorLdr = analogRead(LDR);
  Serial.println(valorLdr);

  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

  
  if (valorLdr < 580) digitalWrite(led1, HIGH);  
  if (valorLdr < 512) digitalWrite(led2, HIGH);  
  if (valorLdr < 342) digitalWrite(led3, HIGH);  
  if (valorLdr < 200) digitalWrite(led4, HIGH);  
    
  delay(200);
}