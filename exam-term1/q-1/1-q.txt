#include <iostream>

using namespace std;
int main() {
    int arrayMain[3];
    for (int f = 0 ; f < 3 ;f++) {
        cout << "pls enter the number ";
        cin >> arrayMain[f];
    }
    int min ,max ;
    min = arrayMain[0];
    max = arrayMain[0];

    for (int i = 0 ; i < 3 ; i++) {
        if (min > arrayMain[i]){ min = arrayMain[i];}
        if (max < arrayMain[i]){ max = arrayMain[i];}
    }
    cout << "The min of numbers is:" << min << endl;
    cout << "The max of numbers is:" << max ;
}