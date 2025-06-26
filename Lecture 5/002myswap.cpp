#include<iostream>
using namespace std;
void mySwap(int& x, int& y){
    int temp = x;
    x=y;
    y=temp;
}
int main(){

    int a = 10;
    int b = 20;
    mySwap(a,b);
    cout<<"a is " <<a<<endl;
    cout<<"b is " <<b<<endl;



    return 0;
}