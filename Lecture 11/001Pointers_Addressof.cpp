#include<iostream>
using namespace std;
int main(){
    int x =10;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Size of &x: " << sizeof(&x) << endl;
    cout<<endl;

    double y = 3.14;
    cout<<"y = "<<y<<endl;
    cout<<"&y = "<<&y<<endl;
    cout<<"Size of &y: "<<sizeof(&y)<<endl;
    cout<<endl;

    char z = 'A';
    cout<<"z = "<<z<<endl;
    cout<<"&z = "<<&z<<endl;
    cout<<"Size of &z: "<<sizeof(&z);
    cout<<endl;


    return 0;
}