#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);

#define ONE_WIRE_BUS 2 // Data wire is plugged into port 2 on the Arduino
#define ONE_WIRE_BUS_SECONDARY 0 // Data wire is plugged into port 0 on the Arduino



// Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
OneWire oneWireSecondary(ONE_WIRE_BUS_SECONDARY);
// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);
DallasTemperature sensorsSecondary(&oneWireSecondary);
float water_temp;
float air_temp;
float temp_diff;
const int buttonPin = 16;
const int buzzerPin = 15;
int buttonState;
int lastButtonState = LOW;
int buzzerFlag = LOW;
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 10;


void setup(void)
{
  // start serial port
  Serial.begin(9600);
  // Start up the library
  sensors.begin();
  sensorsSecondary.begin();
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, buzzerFlag);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();
}

/*
 * Main function, get and show the temperature
 */
void loop(void)
{ 
  sensors.requestTemperatures(); // Send the command to get temperatures
  sensorsSecondary.requestTemperatures(); // Send the command to get temperatures
  water_temp = sensors.getTempFByIndex(0) - 0.33;
  air_temp = sensorsSecondary.getTempFByIndex(0);
  Serial.print("Water: ");
  Serial.print(water_temp);
  Serial.print(" Ambient: ");
  Serial.println(air_temp);
  lcd.setCursor(0,0);
  lcd.print("  Water:  ");
  lcd.print(water_temp);
  lcd.setCursor(0,1);
  lcd.print("Ambient:  ");
  lcd.print(air_temp);

  //temp_diff = air_temp - water_temp;
  
  if(water_temp <= 50){
    digitalWrite(13, HIGH);//green on
    digitalWrite(12, LOW);//yellow off
    digitalWrite(14, LOW);//red off
  }
  if(water_temp < 65 && water_temp > 50){
    digitalWrite(13, LOW);//green off
    digitalWrite(12, HIGH);//yellow on
    digitalWrite(14, LOW);//red off
  }
  if(water_temp >= 65){
    digitalWrite(13, LOW);//green off
    digitalWrite(12, LOW);//yellow off
    digitalWrite(14, HIGH);//red on
  }
  /*int reading = digitalRead(buttonPin);
  
    if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
        buzzerFlag = !buzzerFlag;
      }
    }
  }

  // set the buzzer: NOT WORKING*************
//  if (buzzerFlag == HIGH){
//    tone(buzzerPin, 500);
//  }
//  if (buzzerFlag == LOW){
//    noTone(buzzerPin);
//  }

  // save the reading. Next time through the loop, it'll be the lastButtonState:
  //lastButtonState = reading;
*/
}
