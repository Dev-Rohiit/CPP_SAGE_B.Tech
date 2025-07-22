#include<iostream>
using namespace std;
int* f(){
    // int x = 10;
    // return &x; // Returning address of a local variable

    int* ptr = new int; // Dynamically allocate memory for an integer
    *ptr = 10; // Assign a value to the allocated memory
    return ptr;
}
int main(){
    int* xptr = f();
    cout<<*xptr<<endl; // Undefined behavior, as xptr points to a local variable that is out of scope
} 