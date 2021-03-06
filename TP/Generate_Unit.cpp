#include "Generate_Unit.h"

Generate_Unit::Generate_Unit(string name, int color, int sex, int weight, int height, int mind, int charisma, int power, int speed, Origin origin) {
  Param args = {name, color, sex, 100, weight, height, mind, charisma, power, speed, origin};

  Add(args);
  Create(args);
}

template<class C>
void Generate_Unit::Add(const Param &id) {
  typename FactoryMap::iterator it = _factory.find(id);
  if (it == _factory.end())
    _factory[id] = new UnitCreator<C>();
}

Unit *Generate_Unit::Create(const Param &id) const {
  typename FactoryMap::iterator it = _factory.find(id);
  if (it != _factory.end())
    return it->second->create();
  return 0;
}
