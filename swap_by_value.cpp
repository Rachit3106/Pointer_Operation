/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout << "After swapping: x = " << x << ", y = " << y << endl;
}
int main(){
    int a=5,b=10;
    swap(a,b);
    cout << "In main: a = " << a << ", b = " << b << endl;
    return 0;
}
/*
Output:-
After swapping: x = 10, y = 5
In main: a = 5, b = 10
*/