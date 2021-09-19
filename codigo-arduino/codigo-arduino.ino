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
	
		if(input == 9) {
			
			for(int i = 0; i < 8; i++) {
				estado[i] = 0;
				digitalWrite(i, LOW);
			
			}
			Serial.println("DESLIGANDO TODAS AS LEDS");
		}
		
		else {
			
			if(estado[input] == 0)
			{
				estado[input] = 1;
				digitalWrite(input, HIGH);
				Serial.println("LIGANDO LED " + String(input));
			}
		
			else
			{
				estado[input] = 0;
				digitalWrite(input, LOW);
				Serial.println("DESLIGANDO LED " + String(input));
			}
		}
	}
}
