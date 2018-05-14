#pragma once
#include "Decorator.h"

#ifndef TP_black_unit_H
#define TP_black_unit_H

class black_unit : public Decorator{
 public:
  explicit black_unit(Param args);
  
  void Set_power(int arg) override;
  void Set_speed(int arg) override;

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

#endif //TP_black_unit_H
