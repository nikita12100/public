//
// Created by User on 014 14.05.18.
//

#ifndef TP_HORSE_UNIT_H
#define TP_HORSE_UNIT_H

#include "Decorator.h"

class horse_unit: public Decorator{
 public:
  explicit horse_unit(Param args);

  void Set_weight(int arg) override ;
  void Set_speed(int arg) override ;

 private:
  int sex;  // пол 1-м 2-ж
  string name;

  //// характеристики
  int skin_color;  //цвет кожи персонажа 1-белый 2-черный
  int weight;
  int heigt;
  int mind;
  int charisma;
  int power;
  int speed;
  Origin origin;

};

#endif //TP_HORSE_UNIT_H
