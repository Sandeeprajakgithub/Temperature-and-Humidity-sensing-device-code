#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
int i = 1;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 Sensor Test");
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%, Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  
  Serial.print("H:");
  Serial.print(humidity);
  Serial.print(",T:");
  Serial.println(temperature);

  Serial.print("TEMPRATURE AND HUMIDITY AFTER : ");
  Serial.print(i*2);
  Serial.println(" seconds ");
  i = i+1;
}

