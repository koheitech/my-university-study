/* ---------- time ----------*/
#include <iostream>
using namespace std;

class Time
{
public:
  Time(); //constructor without parameter
  Time(int, int, int); //constructor with parameter
  void setTime(int, int, int);
  void print24h();
  void print12h();
private:
  int hour;
  int min;
  int sec;
};

Time::Time()
{
  hour = 0;
  min = 0;
  sec = 0;
}

Time::Time(int x, int y, int z)
{
  hour = x;
  min = y;
  sec = z;
}

void Time::setTime(int h, int m, int s)
{
  if((h<24) && (h>=0))
    hour = h;
  if((m<60) && (m<=0))
    min = m;
  if((s<60) && (s>=0))
    sec = s;
}

void Time::print24h()
{
  cout << hour << ":" << min << ":" << sec << endl;
}

void Time::print12h()
{
  if((hour==0) || (hour==12))
    cout << 12 << ":";
  else
    cout << hour%12 << ":";
  cout << min << ":" << sec;
  
  if(hour<12)
    cout << " AM" << endl;
  else
    cout << " PM" << endl;
}

int main()
{
  Time t1;
  Time t2(14, 5, 30);
  
  t1.print12h();
  t2.print24h();
}

/* ---------- fraction ----------*/
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Fraction
{
private:
  int numerator;
  int denominator;

public:
  //Fraction();
  int getNumerator()
  { return numerator;}
  
  int getDenominator()
  { return denominator;}
  
  void assign(int n, int d)
  {
    numerator = n;
    denominator = d;
  }
  
  void printFraction()
  { cout << numerator << " / " << denominator << endl;}

  Fraction add(Fraction f);
  Fraction div(Fraction f);
  Fraction mult(Fraction f);
  Fraction dif(Fraction f);
  Fraction reduce(Fraction f);
};

Fraction Fraction::add(Fraction f)
{
  Fraction result;
  result.numerator = numerator*f.denominator + f.numerator*denominator;
  result.denominator = denominator*f.denominator;
  return result;
}

Fraction Fraction::dif(Fraction f)
{
  Fraction result;
  result.numerator = numerator*f.denominator - f.numerator*denominator;
  result.denominator = denominator*f.denominator;
  return result;
}

Fraction Fraction::mult(Fraction f)
{
  Fraction result;
  result.numerator = numerator * f.numerator;
  result.denominator = denominator * f.denominator;
  return result;
}

Fraction Fraction::div(Fraction f)
{
  Fraction result;
  result.numerator = numerator * f.denominator;
  result.denominator = denominator * f.numerator;
  return result;
}

Fraction Fraction::reduce(Fraction p)
{
  
  int i, min;
  min = (p.numerator > p.denominator) ? p.numerator : p.denominator;
  for(i=min; i>=1; --i)
    if(p.numerator%i==0 && p.denominator%i==0)
    {
       p.numerator /= i;
       p.denominator /= i;
       return p;
    }
  return p;
}



int main()
{
  Fraction f1, f2, f3, f4;
  Fraction sum, dif, prod, quot, red;
  
  f1.assign(1, 3); //f1: 1/3
  f2.assign(1, 4); //f2: 1/4
  f3.assign(2, 10); //f3: 2/10
  
  
  cout << "f1: ";
  f1.printFraction();
  cout << "f2: ";
  f2.printFraction();
  cout << "f3: ";
  f2.printFraction();
  
  cout << "--------- four arithmetic operations ---------" << endl;
  sum = f1.add(f2);
  cout << "sum = f1 + f2: ";
  sum.printFraction(); //sum = f1+f2 = 7/12
  
  dif = f1.dif(f2);
  cout << "dif = f1 - f2: ";
  dif.printFraction(); //dif = f1-f2 = 1/12
  
  prod = f1.mult(f2);
  cout << "mult = f1 * f2: ";
  prod.printFraction(); //prod = f1*f2 = 1/12
  
  quot = f1.div(f2);
  cout << "div = f1 / f2: ";
  quot.printFraction(); //quot = f1/f2 = 4/3
  
  f4 = f1.add(f3);
  cout << "f4 = f1 + f3: ";
  f4.printFraction(); //f4 = f1+f3 = 16/30
  
  red = f4.reduce(f4);
  cout << "reduced f4: ";
  red.printFraction(); // f4 reduced to 8/15
  
  
  return 0;
}



