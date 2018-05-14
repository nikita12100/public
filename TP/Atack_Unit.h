//
// Created by User on 014 14.05.18.
//

#ifndef TP_ATACK_UNIT_H
#define TP_ATACK_UNIT_H

#include "Command.h"

class Atack_Unit: public Command {
 public:
  explicit Atack_Unit(Command *command);

  bool execute() override {
    powerDo -= 20;
    speedDo -= 10;
    mindDo += 5;

    healthWait -= 20;

    return true;
  }
};

#endif //TP_ATACK_UNIT_H
