/*******************************************************

Control of HLT tun (Beer brewing equipment).

Part1 - Water level / voltage supply control

Purpose: To avoid operating the electrical heater when it 
is not submerged. To avoid over filling of the tun.

Description: Using two float switches to enable/disable 
the supply voltage to the electrical heater. 
FloatSwitchMin measures the minimum water level, i.e. 
when there is enough water covering the electrical heater 
to safely turn it on. FloatSwitchMax measures the maximum 
water level in the tun.

Pontus Henningsson, Feb 2016

********************************************************/

int FloatSwitchMin = D2; //NO float switch connected to digital IO pin 2
int FloatSwitchMax = D3; //NO float switch connected to digital IO pin 2
int HeaterSupplyRelay = D8;
int AlarmRelay = D9;
int delayValue = 3000;

void setup() {

  pinMode(FloatSwitchMin, INPUT);
  pinMode(FloatSwitchMax, INPUT);

  pinMode(HeaterSupplyRelay, OUTPUT);
  pinMode(AlarmRelay, OUTPUT);

// Set relays in default state HIGH = not activated
  digitalWrite(HeaterSupplyRelay, HIGH);
  digitalWrite(AlarmRelay, HIGH);

  Serial.begin(9600);
  delay(delayValue);
  Serial.println("Lets start!");
}

void loop() {

  Serial.print("FloatSwitchMin is ");
  Serial.println(digitalRead(FloatSwitchMin));
  Serial.print("FloatSwitchMax is ");
  Serial.println(digitalRead(FloatSwitchMax));

  digitalWrite(HeaterSupplyRelay, LOW); //activate relay
  Serial.println("HeaterSupplyRelay is ON");
  delay(delayValue);
 
  digitalWrite(HeaterSupplyRelay, HIGH);
  Serial.println("HeaterSupplyRelay is OFF");
  delay(delayValue);

  digitalWrite(AlarmRelay, LOW);
  Serial.println("AlarmRelay is ON");
  delay(delayValue);
  
  digitalWrite(AlarmRelay, HIGH);
  Serial.println("AlarmRelay is OFF");
  delay(delayValue);



}
