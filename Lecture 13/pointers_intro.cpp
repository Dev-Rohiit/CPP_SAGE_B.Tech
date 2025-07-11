#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* xptr  = &x;
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<"sizeof x is: "<<sizeof(x)<<endl;
    cout<<"sizeof &x is: "<<sizeof(&x)<<endl;
    cout<<"xptr: "<<xptr<<endl;

    cout<<endl;

    double y = 3.14;
    double* yptr  = &y;
    cout<<"y = "<<y<<endl;
    cout<<"&y = "<<&y<<endl;
    cout<<"sizeof y is: "<<sizeof(y)<<endl;
    cout<<"sizeof &y is: "<<sizeof(&y)<<endl;
    cout<<"yptr: "<<yptr<<endl;

    cout<<endl;
        
    char z = 'A';
    char* chptr  = &z;
    cout<<"z = "<<z<<endl;
    cout<<"&z = "<<&z<<endl;
    cout<<"sizeof z is: "<<sizeof(z)<<endl;
    cout<<"sizeof &z is: "<<sizeof(&z)<<endl;
    cout<<"chptr: "<<chptr<<endl;

    cout<<endl;

    return 0;
}