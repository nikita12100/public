#ifndef TP_GENERATE_UNIT_H
#define TP_GENERATE_UNIT_H

#include "Unit.h"
#include "white_unit.h"
#include "balck_unit.h"


class Generate_Unit: public Unit {
 public:
  Generate_Unit &operator=(string name, int color, int sex, int weight, int height);

};

#endif //TP_GENERATE_UNIT_H
