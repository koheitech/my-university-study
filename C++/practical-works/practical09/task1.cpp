#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Rectangle
{
private:
  double width;
  double height;

public:
  Rectangle()
  {
    width = 1;
    height = 1;
  }
  
  Rectangle(double w, double h)
  {
    width = w;
    height = h;
  }
  
  double getWidth()
  {return width;}
  
  double getHeight()
  {return height;}
  
  void setWidth(double w)
  {width = w;}
  
  void setHeight(double h)
  {height = h;}
  
  double getArea()
  {return width*height;}
};

int main()
{
  Rectangle rec1;
  rec1.setWidth(4);
  rec1.setHeight(40);
  
  Rectangle rec2(3.5, 35.9);
  
  cout << "Width of Rectangle1: " << rec1.getWidth() << endl;
  cout << "Height of Rectangle1: " << rec1.getHeight() << endl;
  cout << "Area of Rectangle1: " << rec1.getArea() << endl;
  
  cout << "\n------------------------------\n\n";
  
  cout << "Width of Rectangle2: " << rec2.getWidth() << endl;
  cout << "Height of Rectangle2: " << rec2.getHeight() << endl;
  cout << "Area of Rectangle2: " << rec2.getArea() << endl;
}
