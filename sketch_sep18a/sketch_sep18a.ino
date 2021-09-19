void setup() {
  	Serial.begin(9600);
}

void loop() {
	char led = (int) Serial.read();
	
	Serial.println(led);
	
	if(led > 0 && led < 8) {
		digitalWrite(led, digitalRead(led));
	}
}