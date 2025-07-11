#include<iostream>
using namespace std;
int main(){
    
    char z = 'A';
    char* chptr = &z;

    int* ptr1 = (int*)&z;//pointer initialization

    cout<<"z = "<<z<<endl;
    cout<<"&z = "<<&z<<endl;
    cout<<"sizeof z is: "<<sizeof(z)<<endl;
    cout<<"sizeof &z is: "<<sizeof(&z)<<endl;
    cout<<"chptr: "<<chptr<<endl;
    cout<<"ptr1 = "<<ptr1<<endl;




    return 0;
}