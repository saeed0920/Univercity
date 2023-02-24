#include <iostream>

using namespace std;
int main() {
    int A[10] , B[10] , C[10];
    for (int f = 0 ; f < 10 ; f++) {
        cout << "Pls enter the number for Array A:";
        cin >> A[f];
    }
    for (int f = 0 ; f < 10 ; f++) {
        cout << "Pls enter the number for Array B:";
        cin >> B[f];
    }
    for (int i = 0 ; i < 10 ; i++) { 
        C[i] = A[i] + B[i];
    }
    for (int i = 0 ; i < 10 ; i++){
        cout << C[i] << "\t";
    }
}