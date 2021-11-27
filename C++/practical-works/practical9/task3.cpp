#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Account
{
private:
  int id;
  double balance;
  double annualInterestRate;
  
public:
  Account()
  :id(0), balance(0), annualInterestRate(0) //constructor initializer
  {cout << "Account is created." << endl << endl;}
  
  void Getter()
  {
    cout << "\n\n----- Account information -----" << endl;
    cout << "Account ID: " << id << endl;
    cout << "Balance: " << balance << endl;
    cout << "Annual Interest Rate: " << annualInterestRate << endl;
    cout << "-----------------------------------" << endl << endl;
  }
  
  void Setter(int x, double y, double z)
  {
    id = x;
    balance = y;
    annualInterestRate = z;
    cout << "Accout information is updated;" << endl;
    Getter();
  }
  
  void getMontlyInterestRate()
  {cout << "Montly Interest Rate: " << annualInterestRate/12 << endl;}
  
  void Withdraw(double drew)
  {
    if(balance < drew)
      cout << "The amount exceeds your balance." << endl;
    else
    {
      balance = balance-drew;
      cout << "$" << drew << " has been withdrew." << endl;
      cout << "The current balance is: $" << balance << endl << endl;
    }
    
  }
  
  void Deposite(double put)
  {
    balance+=put;
    cout << "$" << put << " has been deposited." << endl;
    cout << "The current balance is: $" << balance << endl << endl;
  }
};

int main()
{
  Account a1;
  a1.Setter(1122, 20000, 0.045);
  
  a1.Withdraw(2500);
  a1.Deposite(3000);
  a1.Getter();
  
  a1.getMontlyInterestRate();
}
