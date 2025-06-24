#include<iostream>
using namespace std;
void isEven(int n){
    if(n%2 ==0){
        cout <<n<<" is Even"<<endl;
    }else{
        cout<<n<<" is odd"<<endl;
    }
}


int main(){

    isEven(6);

    return 0;
}