#include<iostream>
using namespace std;
void f(int n){
    //base case
    if (n==0)
    {
        return;
    }
    //recusrsive case
    //1. ask your friend to print the numbers from (1 to n-1)
    f(n-1);
    //2. print the number n
    cout<<n<<" ";
}
int main(){
    int n = 6;
    f(n);

    return 0;
}