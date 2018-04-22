#pragma once
#include "Unit.cpp"

#ifndef TP_WHITE_UNIT_H
#define TP_WHITE_UNIT_H

class white_unit : public Unit {
 public:

  virtual void Set_mind(int arg);
  virtual void Set_charisma(int arg);

 private:

};

#endif //TP_WHITE_UNIT_H
