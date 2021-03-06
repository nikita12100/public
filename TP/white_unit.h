#pragma once
#include "Decorator.h"

#ifndef TP_WHITE_UNIT_H
#define TP_WHITE_UNIT_H

class white_unit : public Decorator {
 public:
  explicit white_unit(Param args);

  void Set_mind(int arg) override;
  void Set_charisma(int arg) override;

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

#endif //TP_WHITE_UNIT_H
