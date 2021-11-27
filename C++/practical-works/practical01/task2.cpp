#include <iostream>
using namespace std;
int main(){
    const int limit = 15; // # of rows
    const float conversion = 3.28084; //conversion rate
    cout << "Conversion from meter to feet" << endl;
    cout << "meter" << " => " << "feet" << endl;
    for (int i=1; i<=limit; i++){
        float feet = i*conversion;
        cout<<i<<" => "<<feet<<endl;
    }
}

/* refactor */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int limit = 15; // # of rows
    const float meter2feet = 3.28084; //conversion rate
    cout << "Conversion from meter to feet" << endl;
    cout << left << setw(10) << "meter" << left << setw(10) << "feet" << endl;
  
    for (int i=1; i<=limit; i++){
        float feet = i*meter2feet;
        cout << setw(10) << i << setw(10) << feet << endl;
    }
}
