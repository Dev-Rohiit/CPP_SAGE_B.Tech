#include<iostream>
using namespace std;
bool isEven(int n){
    // if(n%2 ==0){
    //     return true;
    // }else{
    //     return false;
    // }
    return n%2 ==0;

}

int main(){
    // -------By taking our own input ------------------------
    // int k;
    // cin>>k;
    // bool ans = isEven(k);
    // if(ans== true){
    //     cout<<k<<" is Even"<<endl;
    // }else{
    //     cout<<k<<" is odd"<<endl;
    // }


    // -----------------using ternary operator----------------
    // isEven(6)? cout<<"Even"<<endl : cout<<"Odd"<<endl;



    // ------------------using if else--------------------------
    // if(isEven(6)){
    //     cout<<"Even"<<endl;
    // }else{
    //     cout<<"Odd"<<endl;
    // }

    
    // ------------------directly printing the result-------------------------- 
        cout<<isEven(6);
    
    return 0;
}