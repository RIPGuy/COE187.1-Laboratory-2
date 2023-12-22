#include <Wire.h>

void setup() {
  Serial.begin(9600); /* begin serial for debug */
  Wire.begin(D1, D2); /* join i2c bus with SDA=D1 and SCL=D2 of NodeMCU */
}

void loop() {
  delay(5000);
  // Command to turn on LED on Slave 1
  Wire.beginTransmission(8); /* begin with device address 8 (Slave 1) */
  Wire.write("1"); /* sends command to turn on LED on Slave 1 */
  Serial.println("ON SLAVE 1");
  Wire.endTransmission(); /* stop transmitting to Slave 1 */

  delay(1000);

  // Command to turn off LED on Slave 1
  Wire.beginTransmission(8); /* begin with device address 8 (Slave 1) */
  Wire.write("0"); /* sends command to turn off LED on Slave 1 */
  Serial.println("OFF SLAVE 1");
  Wire.endTransmission(); /* stop transmitting to Slave 1 */

  delay(5000);

  // Command to turn on LED on Slave 2
  Wire.beginTransmission(9); /* begin with device address 9 (Slave 2) */
  Wire.write("1"); /* sends command to turn on LED on Slave 2 */
  Serial.println("ON SLAVE 2");
  Wire.endTransmission(); /* stop transmitting to Slave 2 */

  delay(1000);

  // Command to turn off LED on Slave 2
  Wire.beginTransmission(9); /* begin with device address 9 (Slave 2) */
  Wire.write("0"); /* sends command to turn off LED on Slave 2 */
  Serial.println("OFF SLAVE 2");
  Wire.endTransmission(); /* stop transmitting to Slave 2 */

  delay(1000);
}
