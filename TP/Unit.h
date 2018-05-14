#ifndef TP_UNIT_H
#define TP_UNIT_H
#include <string>

using namespace std;

enum Origin{
  man = 0,
  animal
};

struct Param {
  string name;
  int color;
  int health;
  int sex;
  int weight;
  int height;
  int mind;
  int charisma;
  int power;
  int speed;
  Origin origin;    //  происхождение (человек/зверь)
};

class Unit {
 public:
  /// внешность
  int sex;  // пол 1-м 2-ж
  string name;

  void skin_colort(int arg);
  void Set_sex(int arg);
  void Set_name(string n);
  virtual void Set_weight(int arg);
  virtual void Set_heigt(int arg);
  virtual void Set_mind(int arg);
  virtual void Set_charisma(int arg);
  virtual void Set_power(int arg);
  virtual void Set_speed(int arg);
  virtual void Set_origin(int arg);

  virtual int Get_weight();
  virtual int Get_height();
  virtual int Get_health();
  virtual int Get_mind();
  virtual int Get_charisma();
  virtual int Get_power();
  virtual int Get_speed();
  virtual int Get_origin();

 protected:

  //// характеристики
  int skin_color;  //цвет кожи персонажа 1-белый 2-черный
  int weight;
  int height;
  int health;
  int mind;
  int charisma;
  int power;
  int speed;
  Origin origin;
};

#endif //TP_UNIT_H
