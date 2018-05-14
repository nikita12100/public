//
// Created by User on 014 14.05.18.
//

#ifndef TP_COMMAND_H
#define TP_COMMAND_H

#include "Unit.h"

class Command {
 public:
  Command() = default;
  virtual Command(Unit &unitDo, Unit &unitWait) :
      healthDo(unitDo.Get_height()),
      speedDo(unitDo.Get_speed()),
      powerDo(unitDo.Get_power()),
      mindDo(unitDo.Get_mind()),
      healthWait(unitWait.Get_health())
  {}

  virtual bool execute() = default;

 protected:
  virtual int healthDo;
  virtual int speedDo;
  virtual int powerDo;
  virtual int mindDo;

  virtual int healthWait;

};

#endif //TP_COMMAND_H
