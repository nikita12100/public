//
// Created by User on 014 14.05.18.
//

#ifndef TP_WAR_H
#define TP_WAR_H

#include "Command.h"
#include "Move_Unit.h"
#include "Atack_Unit.h"
#include <iostream>

class War:Command {
 public:
  War(Unit& unit1_, Unit &unit2_):
      unit1(unit1_),
      unit2(unit2_)
      {}

  void Battle(){
    auto step1 = new Move_Unit(command1);
    step1->execute();

    auto step2 = new Move_Unit(command2);
    step2->execute();

    auto step3 = new Atack_Unit(command1);
    step1->execute();

    auto step4 = new Atack_Unit(command2);
    step4->execute();

    if(command1->healthDo > command1->healthWait)
      std::cout << "Unit 1 Won !";
    else
      std::cout << "Unit 2 Won !";
  }


 private:
  Unit& unit1;
  Unit& unit2;

  auto command1 = new Command(unit1, unit2);
  auto command2 = new Command(unit2, unit1);

};

#endif //TP_WAR_H
