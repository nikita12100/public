//
// Created by User on 006 06.05.18.
//

#ifndef TP_DECORATOR_H
#define TP_DECORATOR_H

#include "Unit.h"

class Decorator : public Unit {
 public:
  Decorator() = default;
  explicit Decorator(Unit *inner);

  // здесь мы можем декорировать значения
  void Set_weight(int arg) override;
  void Set_heigt(int arg) override;
  void Set_mind(int arg) override;
  void Set_charisma(int arg) override;
  void Set_power(int arg) override;
  void Set_speed(int arg) override;
  void Set_origin(int arg) override;

 private:
  Unit *wrapper;
};

#endif //TP_DECORATOR_H
