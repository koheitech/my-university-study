#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Fan
{
private:
  int speed;
  bool on;
  double radius;
public:
  Fan()
  {
    speed = 1;
    on = false;
    radius = 5;
    cout << "Fan object is created." << endl;
  }
  
  void Setter(int x=1, bool y=false, double z=5) //default value set
  {
    speed = x;
    on = y;
    radius = z;
  }
  
  void Getter()　//display
  {
    cout << "Speed: " << speed << endl;
    cout << "Status: " << ((on) ? "On" : "OFF") << endl;
    cout << "Radius: " << radius << endl;
  }
};

int main()
{
  Fan f1, f2;
  
  f1.Setter(3, true, 10);
  f2.Setter(2); //only speed is changed, and others remian to be default values
  
  f1.Getter();
  f2.Getter();
}
