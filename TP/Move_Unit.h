//
// Created by User on 014 14.05.18.
//

#ifndef TP_MOVE_UNIT_H
#define TP_MOVE_UNIT_H

#include "Command.h"


class Move_Unit: public Command{
 public:
  explicit Move_Unit(Command *command);

  bool execute() override {
    mindDo -= 5;
    speedDo -=5;

    return true;
  }
};

#endif //TP_MOVE_UNIT_H
