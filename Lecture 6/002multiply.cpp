#include<iostream>
using namespace std;

int multiply(int,int);

int main(){
    cout<<multiply(2,3);
    return 0;
}
int multiply(int a, int b){
    return a * b; // Return the product of 'a' and 'b'
}