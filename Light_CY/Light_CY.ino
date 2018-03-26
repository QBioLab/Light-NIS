
int serial_temp = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // set shutter pin
  digitalWrite(2, LOW ); //Close LED
  pinMode(3, OUTPUT); // test pin
  digitalWrite(3, HIGH);// always open

  Serial.begin(115200);
  Serial.print('1');

}

void loop() {
  // put your main code here, to run repeatedly:
  serial_temp = Serial.read();
  if(serial_temp != -1 ){
  //Serial.println(serial_temp);
  digitalWrite(2, HIGH);// always open
  delay(1000);
  digitalWrite(2, LOW);// always open
 }
}
