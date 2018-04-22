#include <iostream>
#include "white_unit.cpp"
#include "balck_unit.cpp"
#include "Generate_Unit.cpp"
using namespace std;

int main() {
  cout << "Write name:";
  string name = 0;
  cin >> name;

  cout << "Select skin color:\n 1 - white\n 2 - black";
  int color = 0;
  cin >> color;

  cout << "Select sex:\n 1 - man\n 2 - women";
  int sex = 0;
  cin >> sex;

  cout << "Write weight:";
  int weight = 0;
  cin >> weight;

  cout << "Write hieght:";
  int hieght = 0;
  cin >> hieght;

  Generate_Unit unit_1(name, color, sex, weight, hieght);

  return 0;
}