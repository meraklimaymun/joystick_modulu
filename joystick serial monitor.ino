const int BUTON_PIN = 2;
const int X_PIN = 0;
const int Y_PIN = 1;

void setup() {
pinMode(BUTON_PIN, INPUT);
digitalWrite(BUTON_PIN, HIGH);
Serial.begin(9600);
}

void loop() {
Serial.print("Dugme: ");
Serial.println(digitalRead(BUTON_PIN));
Serial.print("\n");
Serial.print("X-Ekseni: ");
Serial.print(analogRead(X_PIN));
Serial.print("\n");
Serial.print("Y-Ekseni: ");
Serial.println(analogRead(Y_PIN));
Serial.print("\n\n");
delay(500);
}
