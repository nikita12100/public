//
// Created by User on 006 06.05.18.
//

#include "Decorator.h"

Decorator::Decorator(Unit *inner) {
  wrapper = inner;
}

void Decorator::Set_weight(int arg) {
  wrapper->Set_weight(arg);
}

void Decorator::Set_heigt(int arg) {
  wrapper->Set_heigt(arg);
}

void Decorator::Set_mind(int arg) {
  wrapper->Set_mind(arg);
}

void Decorator::Set_charisma(int arg) {
  wrapper->Set_charisma(arg);
}

void Decorator::Set_power(int arg) {
  wrapper->Set_power(arg);
}

void Decorator::Set_speed(int arg) {
  wrapper->Set_speed(arg);
}
