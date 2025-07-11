#include<iostream>
using namespace std;
int main(){
    int* xptr  = NULL; // Initialize a null pointer
    cout<<"*xptr: "<<*xptr<<endl; // this line will cause a segmentation fault

    return 0;
}