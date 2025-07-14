#include<iostream>
using namespace std;
int f(int n){
    //base case
    if (n==0 or n==1)
    {
        return n; // Return n for base cases 0 and 1
    }

    //Recusrsive case
    //1.compute the (n-1)th fibonacci number.
    int A = f(n-1);
    //2.compute the (n-2)th fibonacci number.
    int B = f(n-2);
    return A + B;
}
int main(){
    int n = 4; // You can change this value to compute Fibonacci for different n
    cout<<f(n)<<endl; // Call the Fibonacci function and print the result


    return 0;
}