#pragma once
#include "Unit.cpp"

#ifndef TP_BALCK_UNIT_H
#define TP_BALCK_UNIT_H

class balck_unit : public Unit {
 public:

  virtual void Set_power(int arg);
  virtual void Set_speed(int arg);

};

#endif //TP_BALCK_UNIT_H
