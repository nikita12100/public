#ifndef TP_UNIT_H
#define TP_UNIT_H
#include <string>

using namespace std;

class Unit {
 public:
  /// внешность
  int sex;  // пол 1-м 2-ж
  string name;

  void skin_colort(int w);
  void sex(int w);
  void Set_name(string n);
  virtual void Set_weight(int w);
  virtual void Set_heigt(int w);
  virtual void Set_mind(int w);
  virtual void Set_charisma(int w);
  virtual void Set_power(int w);
  virtual void Set_speed(int w);

 protected:

  //// характеристики
  int skin_color;  //цвет кожи персонажа 1-белый 2-черный
  int weight;
  int heigt;
  int mind;
  int charisma;
  int power;
  int speed;

};


#endif //TP_UNIT_H
