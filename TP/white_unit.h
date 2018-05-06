#pragma once
#include "Decorator.h"

#ifndef TP_WHITE_UNIT_H
#define TP_WHITE_UNIT_H

class white_unit : public Decorator {
 public:

  void Set_mind(int arg) override;
  void Set_charisma(int arg) override;

 private:

};

#endif //TP_WHITE_UNIT_H
