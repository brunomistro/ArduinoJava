int estado[] = {0, 0, 0, 0, 0, 0, 0, 0};

void setup() {
  	Serial.begin(9600);

	for(int i = 0; i < 8; i++) {
		pinMode(i, OUTPUT);
	}		
}

void loop() {
	if(Serial.available()) {
		int input = Serial.parseInt();
		
		if(estado[input] == 0)
		{
			estado[input] = 1;
			digitalWrite(input, HIGH);
		}
		
		else
		{
			estado[input] = 0;
			digitalWrite(input, LOW);
		}
	}
}
