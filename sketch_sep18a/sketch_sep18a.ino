int led = 7;

void setup() {
	Serial.begin(9600);
	pinMode(led, OUTPUT);
}

void loop() {
	char acao = Serial.read();

	if(acao == '1') {
		digitalWrite(led, HIGH);
	} else if(acao == '0') {
		digitalWrite(led, LOW);
	}
}