#include<iostream>
using namespace std;

void Iseven(int a){
    if(a%2==0){
        cout<<a<<" is Even"<<endl;
    }else{
        cout<<a<<" is Odd"<<endl;
    }
}

int main(){
    Iseven(7);
    return 0;
}