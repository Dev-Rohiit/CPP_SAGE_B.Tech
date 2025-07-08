#include<iostream>
using namespace std;
int main(){
    int x =10;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Size of &x: " << sizeof(&x) << endl;
    return 0;
}