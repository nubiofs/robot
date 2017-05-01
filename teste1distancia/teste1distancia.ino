int IRpin = 5;                                    // analog pin for reading the IR sensor

void setup() {
  Serial.begin(9600);                             // start the serial port
}

void loop() {
 
  float volts = analogRead(IRpin)*0.0048828125;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  float distance = (65*pow(volts, -1.10)) / 10.0;          // worked out from graph 65 = theretical distance / (1/Volts)S - luckylarry.co.uk
  Serial.println(distance);                       // print the distance
  delay(100);                                     // arbitary wait time.
}
