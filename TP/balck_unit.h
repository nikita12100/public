#pragma once
#include "Unit.h"

#ifndef TP_BALCK_UNIT_H
#define TP_BALCK_UNIT_H


class balck_unit: public Unit {
 public:

  virtual void Set_power(int w);
  virtual void Set_speed(int w);

};

#endif //TP_BALCK_UNIT_H
