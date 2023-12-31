/*********************************************************************
 * @file  Trappe.cpp
 * @brief Fichier source de la classe Trappe
 *********************************************************************/
#include "Trappe.h"
#include <iostream>
using namespace std;

Trappe::Trappe(){
  ServoTrap.attach(Pin_Servo_Trappe, Servo_Angle_0,Servo_Angle_180);
  ServoTrap.write(Valeur_Fermeture_Trappe);
}


void Trappe::Open_Door(){
  ServoTrap.write(Valeur_Ouverture_Trappe);
}

void Trappe::Close_Door(){
  ServoTrap.write(Valeur_Fermeture_Trappe);
}

void Trappe::Distribution(){
  this->Open_Door();
  delay(200);
  this->Close_Door();
}
