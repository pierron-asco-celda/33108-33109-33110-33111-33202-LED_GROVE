/*
 *   ** Cycle clignotant 500ms LED Grove **
 *     PIN D7 Module shield GROVE
*/
#define LED 7

void setup() {
    pinMode(LED, OUTPUT);
}
 
void loop() {
    digitalWrite(LED, HIGH);   
    delay(500);               
    digitalWrite(LED, LOW);   
    delay(500);
}
 
