# 33108-33109-33110-33111-33202 LED GROVE

LED GROVE [33108-33109-33110-33111-33202](https://www.pierron.fr/modules-led-grove.html)

<div style="text-align: justify">Ces modules "LED GROVE" sont conçus pour les débutants. Ils permettent de surveiller les contrôles des ports numériques. Chacun de ces modules peut être monté facilement à la surface de votre boîte ou de votre bureau et utilisé comme lampe pilote pour la puissance ou le signal. Leur luminosité peut être ajustée par le potentiomètre présent sur le module.</div>

Caractéristiques techniques :
- Alimentation : 3 - 5 V
- Consommation : 20 mA
- Luminosité réglable.

![33202](/img/L-33202.jpg)

# Usage :
Pour l’utilisation de ce module, référez-vous aux indications présentes sur le circuit imprimé GROVE.

![P-33202](/img/P-33202.jpg)
![PA-33202](/img/PA-33202.jpg)

# Schémas :

![SCH-33202](/img/SCH-33202.jpg)
![BRD-33202](/img/BRD-33202.jpg)

# Exemple :
### Arduino / C++
```cpp
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
```
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr).
