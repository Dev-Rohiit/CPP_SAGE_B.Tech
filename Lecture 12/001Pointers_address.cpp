#include<iostream>
using namespace std;
int main(){
    int x;
    x = 10;
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<"Size of &x: "<<sizeof(&x)<<endl;
    cout<<endl;

    double y = 3.14;
    cout<<"y = "<<y<<endl;
    cout<<"&y = "<<&y<<endl;
    cout<<"Size of &y: "<<sizeof(&y)<<endl;
    cout<<endl;

    char z = 'a';
    cout<<"z = "<<z<<endl;
    cout<<"&z = "<<&z<<endl;
    cout<<"Size of &z: "<<sizeof(&z)<<endl;
    cout<<endl;

    return 0;
}