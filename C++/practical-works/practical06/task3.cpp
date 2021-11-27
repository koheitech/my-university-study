#include <iostream>
using namespace std;

struct EmployeeDetails{
  char name[50];
  int houseNum;
  char street[50];
  char city[30];
};

void displayEmp(struct EmployeeDetails);
//void displayEmp(EmployeeDetails); => this also works


int main(){
    int numEmp, i, num;
    char yn;
    
    cout << "How many employees?: ";
    cin >> numEmp;
    cin.ignore();
    
    EmployeeDetails employee[numEmp]; //create employee objects * # of employees
    
    /* ----- getting data about employees -----*/
    for(i=0; i<numEmp; ++i){
        cout << "Employee num:" << i+1 << endl;
        
        cout << "Name: ";
        cin.getline(employee[i].name, 50);
        //cin.ignore();

        cout << "House No: ";
        cin >> employee[i].houseNum;
        cin.ignore();
        
        cout << "Street: ";
        cin.getline(employee[i].street, 50);
        //cin.ignore();
        
        cout << "City: ";
        cin.getline(employee[i].city, 30);
        //cin.ignore();
    }

    do{
        cout << "Enter the employee number to display: ";
        cin >> num;

        if(num > numEmp) cout << "No such employee!" << endl;
        else displayEmp(employee[num-1]);

        cout << "Do you wish to continue?(Y/N): ";
        cin >> yn;
    }while(yn == 'y' || yn == 'Y');

}

void displayEmp(EmployeeDetails p){
    cout << "Name: " << p.name << endl;
    cout << "House No: " << p.houseNum << endl;
    cout << "Street: " << p.street <<endl;
    cout << "City: " << p.city << endl;
}

