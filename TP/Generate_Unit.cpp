#include "Generate_Unit.h"


Generate_Unit::Generate_Unit(string name, int color, int sex, int weight, int height) {
  if(color == 1)
    white_unit unit_1;
  if(color == 2)
    balck_unit unit_1;


  unit_1.Set_name(name);
  unit_1.Set_sex(sex);
  unit_1.Set_weight(weight);
  unit_1.Set_height(height);
}
