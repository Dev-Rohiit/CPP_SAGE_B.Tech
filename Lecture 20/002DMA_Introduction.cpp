#include<iostream>
using namespace std;
int main(){
    int* xptr = new int;
    *xptr = 10;
    cout << "Value of xptr: " << *xptr << endl;
    delete xptr; // Free the allocated memory
    xptr = new int;
    *xptr = 20;
    cout << "Value of xptr after reallocation: " << *xptr << endl;
    delete xptr; // Free the allocated memory again
    xptr = NULL;
    cout<<*xptr;
}