#include <iostream>

using namespace std;
int main() {
    int mainArray[10];
    for (int f = 0 ; f < 10 ; f++) {
        cout << "Pla enter the number :";
        cin >> mainArray[f];
    }
    int xy;
    for (int i = 0 ; i < 10 ;i++) {
        xy = i ;
        while(mainArray[xy] > mainArray[xy + 1]){
            int sum = mainArray[xy];
            mainArray[xy] = mainArray[xy + 1];
            mainArray[xy + 1] = sum;
            xy--;
        };
    }
    int x;
    cout << "Pls enter number of x:";
    cin >> x ;
    int mid , min , max ;
    min = 0;
    max = 9;
    mid = (min + max) / 2;
    while(mainArray[mid] != x && min < max) {
        if (x  > mainArray[mid]){
            min = mid + 1 ;
            mid = (min + max) / 2;
        }else {
            max = mid - 1 ;
            mid = (min + max) / 2;
        }
    }
        if (mainArray[mid] == x ) {
            cout << "The position of x is:" << mid ;  
        }else {
            cout << "The x not found in array!";
        }
}
