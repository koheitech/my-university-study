/* ----- showing Today's date ----- */
#include <iostream> 
#include <cstring> 
using namespace std;

struct date 
{
  char WeekDay[4];
  int DayOfMonth; 
  int Month;
  int Year;
};

int main(){
  date TodaysData;

  cout << "Enter the day of the month: ";
  cin >> TodaysData.DayOfMonth;
  cout << "Enter the month: ";
  cin >> TodaysData.Month;
  TodaysData.Year = 2013;
  strcpy(TodaysData.WeekDay, "Fri");
  // we cannot directly assign directly into C-string.
  // `TodaysDate.WeekDay = "Fri"` is not allowed
  // Thus, `strcpy` method is required

  cout << "The date is: ";
  cout << TodaysData.WeekDay << ", " << TodaysData.DayOfMonth <<
  "/" << TodaysData.Month << "/" << TodaysData.Year << endl;
}


/* ----- JFK shot day ----- */
#include <iostream> 
#include <cstring> 
using namespace std;

struct date {
  char WeekDay[4];
  int DayOfMonth; 
  int Month;
  int Year;
};

struct event{
  char description[20];
  date when;
};

int main(){
  
  event JFK;

  JFK.when.DayOfMonth = 22;
  JFK.when.Month = 11;
  JFK.when.Year = 1963;
  strcpy(JFK.description, "J.F.K was shot");

  cout << JFK.when.DayOfMonth << "/" << JFK.when.Month <<
  "/" << JFK.when.Year << ": ";
  cout << JFK.description << endl;
}


/* ----- Payroll #1 ----- 
- Create a data structure suitable for holding the information of an employee: 
  name, ID number, address, phone, rate, hours worked in a week.
- Create a data structure suitable for holding the information of 10 employees.
- Calculate the gross pay of each employee and print it out.
--------------------------- */
#include <iostream> 
using namespace std;
const int NUMEMPS = 2;
struct EmployeeDetails{
  char name[40]; 
  char ID[10]; 
  char address[50]; 
  char phone[15]; 
  double rate; 
  double hours;
};

int main() {
  EmployeeDetails employee[NUMEMPS];
  int i;
  for(i = 0; i < NUMEMPS; i++) {
  
    cout << "Enter employee number: "; 
    cin >> employee[i].ID;
    cin.ignore();

    cout << "Enter employee name: " << endl;
    cin.getline(employee[i].name,40);
    
    cout << "Enter employee phone number: "; 
    cin >> employee[i].phone;
    
    cout << "Enter employee rate: "; 
    cin >> employee[i].rate;
    
    cout << "Enter employee hours worked: "; 
    cin >> employee[i].hours;
    cout <<endl <<endl;
  }
  
  for( i = 0; i < NUMEMPS; i++) {
    cout<< "Employee number "<< employee[i].ID<<endl; 
    cout<<"Gross Pay=" <<employee[i].rate*employee[i].hours <<endl; 
    cout<<"*******************************"<<endl;
  } return 0;
}


/* ----- Payroll #2 ----- 
- Modify the previous program so that our data structure 
  includes the grade of each employee (i.e. grade 0, 1 or 2), 
  the hours worked for each day of the week.
- Calculate the weekly pay of each employee based on his/her grade 
  (which corresponds to certain rate) and keep this in the data structure also.
- NOTE: Weekend rates are multiplied by an overtime premium rate of 1.5.
--------------------------- */

#include <iostream> 
using namespace std;
const int NUMEMPS = 10;
const double overtime=1.5;
const double rate[3]={4.25, 5.00, 5.50};

struct EmployeeDetails{
  char name[40];
  char ID[10];
  char address[50]; 
  char phone[15];
  int grade; //0,1 or 2 
  double hours[7]; 
  double pay;
};

int main(){
  EmployeeDetails employee[NUMEMPS]; 
  int i,j;
  for(i = 0; i < NUMEMPS; i++) {
    cout << "Enter employee number: "; 
    cin >> employee[i].ID;
    //read rest of details...
    cout << "Enter employee grade (0,1 or 2): "; 
    cin >> employee[i].grade;
    cout << "Enter employee hours worked for each day (day 0 is Monday, 1 is Tuesday...):"<<endl;
    
    for (j=0;j<7;j++) {
      cout<<"Day "<<j<<":";
      cin>>employee[i].hours[j];
    }
    employee[i].pay=0.0; //initialize to be 0.0 for later calculation
    cout<<endl<<endl;
  }

  for( i = 0; i < NUMEMPS; i++){ //calculate pay for each employee 
    for (j=0;j<5;j++) //pay for Mon-Fri inclusive 
      employee[i].pay=employee[i].pay + rate[employee[i].grade]*employee[i].hours[j];
    for (j=5;j<7;j++) //pay for Sat & Sun 
      employee[i].pay=employee[i].pay + rate[employee[i].grade]*employee[i].hours[j] * overtime;
  }

  for( i = 0; i < NUMEMPS; i++) {
  cout<< "Employee number: "<< employee[i].ID<<endl; 
  cout<<"Employee grade: "<<employee[i].grade<<endl; 
  cout<<"Employee pay: "<<employee[i].pay<<endl; 
  cout<<"*******************************"<<endl;
  } return 0;
}//end main


/* ----- Structure as Function argument ------ */
#include <iostream>
using namespace std;

struct Employee {
  int idNum;
  double payRate;
  double hours;
};

double calcNet(Employee); //prototype
double calcNet(Employee temp){
    return (temp.payRate*temp.hours);
}

int main() {
  Employee emp={6782, 8.93, 40.5};
  double netPay;

  netPay=calcNet(emp);
  cout<< "The net pay for employee "
    << emp.idNum << " is $" << netPay <<endl;
  return 0;
}


