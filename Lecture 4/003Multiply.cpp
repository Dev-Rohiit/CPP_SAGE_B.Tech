#include<iostream>
using namespace std;

int multiplication(int a, int b){
    cout << "Multiplying " << a << " and " << b << endl;
    // This function multiplies two integers and returns the result
    return a*b;
}

int main(){
    // int c = multiplication(5,6);
    // cout<< "The result of multiplication is: " << c << endl;
                
    //or

    cout<< "The result of multiplication is: " << multiplication(5,6) << endl;
    // The above line calls the multiplication function and prints the result directly

    return 0;
}