#include<iostream>
using namespace std;
int main(){
    
    int x = 516;
    int* xptr  = &x;
    cout<<"x = "<<x<<endl;
    cout<<"sizeof x is: "<<sizeof(x)<<endl;
    cout<<"xptr: "<<xptr<<endl;
    cout<<"sizeof &x is: "<<sizeof(&x)<<endl;
    cout<<"*xptr: "<<*xptr<<endl;
    char* chptr = (char*)&x;
    cout<<"*chptr: "<<(int)*chptr<<endl;

    cout<<endl;





    return 0;
}