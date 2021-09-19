int led = 7;
char input;

void setup() {
	Serial.begin(9600);
	pinMode(led, OUTPUT);
}

void loop() {
	input = Serial.read();
	
	if(input == '1') {
		digitalWrite(led, HIGH);
		Serial.print(input);
	}
	
	if(input == '0') {
		digitalWrite(led, LOW);
		Serial.print(input);
	}
}
