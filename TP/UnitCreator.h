#include "Abstract_Generate_Unit.cpp"

#ifndef TP_UNITCREATOR_H
#define TP_UNITCREATOR_H
template<class C>
class UnitCreator : public Abstract_Generate_Unit {
 public:
  virtual Unit *create() const { return new C(); }
};

#endif //TP_UNITCREATOR_H
