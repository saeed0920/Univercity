#include <iostream>

using namespace std;
int main() {
    int mainArray[10];
    for (int f = 0 ; f < 10 ; f++){
        cout << "enter the number:";
        cin >> mainArray[f];
    }
    int sum,fact;
    for (int i = 0 ; i < 10 ; i++) { 
        sum = mainArray[i] - 1;
        fact = mainArray[i];
        while (sum > 0) {
            fact *= sum;
            sum--;
        }
        cout << mainArray[i] << "\t" << fact << "\n";
    }
}   