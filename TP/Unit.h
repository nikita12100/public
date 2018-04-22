#ifndef TP_UNIT_H
#define TP_UNIT_H
#include <string>

using namespace std;

struct Param {
  string name;
  int color;
  int sex;
  int weight;
  int height;
};

class Unit {
 public:
  /// внешность
  int sex;  // пол 1-м 2-ж
  string name;

  void skin_colort(int arg);
  void sex(int arg);
  void Set_name(string n);
  virtual void Set_weight(int arg);
  virtual void Set_heigt(int arg);
  virtual void Set_mind(int arg);
  virtual void Set_charisma(int arg);
  virtual void Set_power(int arg);
  virtual void Set_speed(int arg);

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
