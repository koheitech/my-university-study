#include <iostream>
using namespace std;

struct Movie {
  char title[50];
  int year;
};


int main() {

    Movie Mfav;
    Movie Yfav;

    strcpy(Mfav.title, "LEON");
    Mfav.year = 1994;

    cout << "Enter your favorite movie: ";
    //cin >> Yfav.title;
    cin.getline(Yfav.title, 50, '\n');

    cout << "what was the year: ";
    cin >> Yfav.year;

    cout << "My favorite movie is:" << endl;
    cout << Mfav.title << " (" << Mfav.year << ")" << endl;

    cout << "Your favorite movie is:" << endl;
    cout << Yfav.title << " (" << Yfav.year << ")" << endl;
    
}


/*refactor */
#include <iostream>
using namespace std;

struct Movie {
  char title[50];
  int year;
};


int main() {
      
    Movie Mfav = {"LEON", 1994}; // with initializer
    Movie Yfav;

//    strcpy(Mfav.title, "LEON");
//    Mfav.year = 1994;

    cout << "Enter your favorite movie: ";
    //cin >> Yfav.title;
    cin.getline(Yfav.title, 50, '\n');

    cout << "what was the year: ";
    cin >> Yfav.year;

    cout << "My favorite movie is:" << endl;
    cout << Mfav.title << " (" << Mfav.year << ")" << endl;

    cout << "Your favorite movie is:" << endl;
    cout << Yfav.title << " (" << Yfav.year << ")" << endl;
    
}

