#include "Unit.h"

void Unit::Set_name(string n) {
  name = n;
}

void Unit::skin_colort(int arg) {
  skin_color = arg;
}

void Unit::Set_sex(int arg) {
  sex = arg;
}

void Unit::Set_weight(int arg) {
  weight = arg;
}

void Unit::Set_heigt(int arg) {
  height = arg;
}

void Unit::Set_mind(int arg) {
  mind = arg;
}

void Unit::Set_charisma(int arg) {
  charisma = arg;
}

void Unit::Set_power(int arg) {
  power = arg;
}

void Unit::Set_speed(int arg) {
  speed = arg;
}

void Unit::Set_origin(int arg) {
  origin = Origin::man;
}

int Unit::Get_weight() {
  return weight;
}

int Unit::Get_height(){
  return height;
}

int Unit::Get_health(){
  return health;
}

int Unit::Get_mind(){
  return mind;
}

int Unit::Get_charisma(){
  return charisma;
}

int Unit::Get_power(){
  return power;
}

int Unit::Get_speed(){
  return speed;
}

int Unit::Get_origin(){
  return origin;
}