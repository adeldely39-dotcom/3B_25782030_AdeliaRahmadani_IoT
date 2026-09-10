const int buttonPin = 4;
const int ledPin = 5;

int ledState = 0;

void setup() {
  Serial.begin(115200);

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, LOW);

  Serial.println("Sistem Sudah Siap! Sakelar Toggle Aktif.");
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {

    delay(200);

    if (digitalRead(buttonPin) == HIGH) {

      ledState = !ledState;

      digitalWrite(ledPin, ledState);

      if (ledState == 1) {
        Serial.println("Tombol Ditekan -> LED Menyala");
      } else {
        Serial.println("Tombol Ditekan -> LED Mati");
      }

      while (digitalRead(buttonPin) == HIGH) {
      }


    }
  }
}