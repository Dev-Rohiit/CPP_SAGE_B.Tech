#include<iostream>
using namespace std;
void f(int n){
    //base case
    if(n==0){
        return;
    }
    //1. print the number n
    cout<<n<<" ";
    //recursive case
    //2. ask your friend to print the numbers from (1 to n-1)
    f(n-1);
}
int main(){
    int n = 5;
    f(n);
    return 0;
}