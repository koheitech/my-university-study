#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void findMinPoint(double [], int, int);

int main () {
    int i, j, numP = 8, dim = 2;
    double arrP[numP][dim], arrD[numP];
    /* ----- variables ----- 
    - numP: number of points
    - dim: dimension
    - arrP: 2D array for storing points
    - arrD: 1D array for storing distances from a given point */

    /* ----- read coordinates from user ----- */
    cout << "Enter 8 points (x and y, respectively): " << endl;
    for(i=0; i<numP; i++){
        cout << "Point NO." << i << ": " << endl;
        for(j=0; j<dim; j++){
            cin >> arrP[i][j];
        }
    }

    /* ----- display read points' coordinates ----- */
    cout << setw(8) << "Point" << "  |" << setw(8) << "x" << setw(8) << "y" << endl;
    cout << setw(26) << "- - - - - - - - - - - - - - - -" << endl;
    for(i=0; i<numP; i++){
        cout << setw(8) << "Point" << i << " |";
        for(j=0; j<dim; j++) cout <<  setw(8) << arrP[i][j];
        cout << endl;
    }

    /* ----- calculating the shortest distance between two points -----
     * calculation of distance from a given point to any other point
     * first loop is for fixing each point,
     * and second loop is for calculating the distance between the given point and any other points.
     * Then, all the calculated distances are stored to arrD, and it is passed to `findMinPoint'*/
    for(i=0; i<numP; i++){
        for(j=0; j<numP; j++){
            arrD[j] = sqrt(pow((arrP[i][0]-arrP[j][0]), 2.0)+pow((arrP[i][1]-arrP[j][1]), 2.0));
            // formula to calculate the distance between 2 points
            // d = sqrt( (x1-x2)^2 + (y1-y2)^2 )
        }
        //TEST //for(int k=0; k<numP; k++) cout << arrD[k] << endl;
        findMinPoint(arrD, numP, i);
    }

    return 0;
}

void findMinPoint(double arr[], int size, int point){
    /* ----- function to find the nearest point -----
     * First, finding the minimum value in arr[],
     * which is the shortest distance for the given point.
     * Then, by using the linear search, display the index, which is the nearest point*/

    int i, counter;
    double smallest;

    /* since I calculate the distance between point[i] and point[i],
     * which is 0 in order to locate index,
     * i validated the value 0 in the code below;*/
    if(arr[0]==0) smallest = arr[1];

    else smallest = arr[0];
    //TEST //cout << "smallest at first: " << smallest << endl;


    for(i = 0; i<size; i++) {
        if(arr[i] == 0) continue;
        if(arr[i] < smallest) smallest = arr[i];
    }
    //TEST //cout << "smallest distance: " << smallest << endl;

    counter=0;
    for(i=0; i<size; i++){

        
        if(arr[i] == smallest && counter>0){ 
        //if there are more than one smallest distances(second or higher match)
            cout << " and Point" << i;
            counter ++;
        }else if(arr[i] == smallest){ //if there is a much
            cout << "Nearest point for Point" << point << " is ===> Point" << i;
            counter ++;
        }
        cout << endl;
    }
}