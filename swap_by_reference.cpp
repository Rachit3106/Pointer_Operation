#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout << "After swapping using reference: x = " << x << ", y = " << y << endl;
}
int main(){
    int a=5,b=10;
    swap(a,b);
    cout << "In main: a = " << a << ", b = " << b << endl;
    return 0;
}
