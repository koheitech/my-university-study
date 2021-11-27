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
  
  void setSpeed(int s) 
  {speed = s;}
  
  void setOn(bool o) 
  {on = o;}
  
  void setRadius(double r) 
  {radius = r;}

  int getSpeed()
  {return speed;}

  bool getOn()
  {return on;}
  
  double getRadius()
  {return radius;}

  void Display()
  {
    cout << "Speed: " << speed << endl;
    cout << "Status: " << ((on) ? "On" : "OFF") << endl;
    cout << "Radius: " << radius << endl;
  }
};

int main()
{
  Fan f1, f2;
  f1.setSpeed(3);
  f1.setOn(true);
  f1.setRadius(10);
  
  f2.setSpeed(2);

  
  f1.Display();
  f2.Display();
}
