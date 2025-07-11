#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* xptr  = &x;
    cout<<"xptr: "<<xptr<<endl;  
    cout<<"*xptr: "<<*xptr<<endl;
    char* chptr = (char*)&x;
    cout<<"*chptr: "<<(int)*chptr<<endl;


    return 0;
}