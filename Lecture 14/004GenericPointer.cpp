#include<iostream>
using namespace std;
int main(){
        
    char z = 'a';
    void* chptr  = &z;
    cout<<"z = "<<z<<endl;
    cout<<"&z = "<<&z<<endl;
    cout<<"sizeof z is: "<<sizeof(z)<<endl;
    cout<<"sizeof &z is: "<<sizeof(&z)<<endl;
    cout<<"chptr: "<<chptr<<endl;

    cout<<endl;

    int x = 10;
    void* xptr  = &x;
    char* cptr = (char*)&x; // typecasting to char pointer
    xptr=cptr;
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<"sizeof x is: "<<sizeof(x)<<endl;
    cout<<"sizeof &x is: "<<sizeof(&x)<<endl;
    cout<<"xptr: "<<xptr<<endl;

    return 0;
}