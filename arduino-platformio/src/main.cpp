/*
  fichier : fun-mooc-Blink.cpp
  auteur : David GILLARD
  github: https://github.com/davidgillard

  Clignotement
  Allume la LED 13 pendant 5 seconde,
  puis l'éteint pendant 5 seconde.

Complément d'information ici on utilise le célébre language c++ pour faire 
fonctionner le projet Blink pour ce faire :
- Ajouter la librairie qui va bien :  #include <Arduino.h> au début du fichier source
- Declaré chaque function personnalisé (excluding built-in, such as setup and loop) before it will be called.

*/

#include "Arduino.h"

void someFunction(int num);

void setup () {
    someFunction(13);
}

void loop() {
    delay(5000);
}

void someFunction(int num) {
}