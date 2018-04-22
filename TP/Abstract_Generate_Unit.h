#ifndef TP_ABSTRACT_GENERATE_UNIT_H
#define TP_ABSTRACT_GENERATE_UNIT_H

class Abstract_Generate_Unit {
  virtual UnitCreator() {}
  virtual Unit *create() const = 0;

};

#endif //TP_ABSTRACT_GENERATE_UNIT_H
