int Water = 0; //water pump
int Soil = 1; //soil sensor

void setup() {
  pinMode(Soil, INPUT);
  pinMode(Water, OUTPUT);
}

void loop() {
  if(digitalRead(Soil) == HIGH){
    digitalWrite(Water, HIGH);
    delay(3000); //1000 per x cubic volume
    digitalWrite(Water, LOW);
  }
  delay(1500); //time=1.5sec
}
