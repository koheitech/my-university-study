#include <iostream>
using namespace std;

int main()
{
    float counter= -1;
    float total = 0;
    int negC = 0;
    int posC = 0;
    int input;
    do{
        cout << "Enter integer(enter 0 to quit): ";
        cin >> input;
        if(input>0){
            posC++;
        }else if(input<0){
            negC++;
        }
        total += input;
        counter++;
    } while (input!=0);
    float average = float(total)/counter;
    cout << "total: " << total << endl;
    cout << "positive numbers inputted: " << posC << endl;
    cout << "negative numbers inputted: " << negC << endl;
    //cout << "counter: "<< counter << endl;
    cout << "average: "<< average << endl;
}

/* --- refactored ---*/
#include <iostream>
using namespace std;

int main()
{
    float counter= 0;
    float total = 0;
    int negC = 0;
    int posC = 0;
    int input;
    
    cout << "Enter integer(enter 0 to quit): ";
    cin >> input;

    while (input != 0)
    {
      if(input>0){
            posC++;
        }else if(input<0){
            negC++;
        }
        total += input;
        counter++;
      
      cout << "Next Number: ";
      cin >> input;
    }

    if (counter == 0)
    {
      cout << "No numbers are entered except for 0." << endl;
      return 0;
    }

    float average = float(total)/counter;
    cout << "total: " << total << endl;
    cout << "positive numbers inputted: " << posC << endl;
    cout << "negative numbers inputted: " << negC << endl;
    //cout << "counter: "<< counter << endl;
    cout << "average: "<< average << endl;
}
