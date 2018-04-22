#ifndef TP_GENERATE_UNIT_H
#define TP_GENERATE_UNIT_H

#include "Unit.cpp"
#include "Abstract_Generate_Unit.cpp"
#include "white_unit.cpp"
#include "balck_unit.cpp"

struct Param {
  string name;
  int color;
  int sex;
  int weight;
  int height;
};

class Generate_Unit {
 protected:
  typedef std::map<Param, Abstract_Generate_Unit> FactoryMap;
  FactoryMap _factory;

 public:
  Generate_Unit(string name, int color, int sex, int weight, int height);
  virtual ~Generate_Unit();

  template <class C>
  void Add(const Param &id);

  Unit *Create(const Param &id) const;

 private:
  enum Unit_Color {
    Unit_for_dev = -1,
    White,
    Black,
    Green
  };

};

#endif //TP_GENERATE_UNIT_H
