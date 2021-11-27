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
  
  void setId(int i){id = i;}
  void setBalance(double i){balance = i;}
  void setAnnualInterestRate(double i){annualInterestRate = i;}
  int getId(){return id;}
  double getBalance(){return balance;}
  double getAnnualInterestRate(){return annualInterestRate;}

  void Display()
  {
    cout << "\n\n----- Account information -----" << endl;
    cout << "Account ID: " << id << endl;
    cout << "Balance: " << balance << endl;
    cout << "Annual Interest Rate: " << annualInterestRate << endl;
    cout << "-----------------------------------" << endl << endl;
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
  a1.setId(1122);
  a1.setBalance(20000);
  a1.setAnnualInterestRate(0.045);
  
  cout << "Account infromation is updated;" << endl;
  a1.Display();
  
  a1.Withdraw(2500);
  a1.Deposite(3000);
  a1.Display();
  
  a1.getMontlyInterestRate();
}
