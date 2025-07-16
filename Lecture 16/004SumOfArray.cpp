#include<iostream>
using namespace std;
int f(int* arr, int n, int i){
    //base case
    if (i == n - 1) {
        return arr[n - 1];
    }
    //assuming that we have an empty array or the array has no elements
    // if (i==n){
    //     return 0;
    // }
    //recursive case
    //1.ask your friend to compute the sum of the arr[i+1..n-1]
    int A = f(arr, n, i+1);
    return arr[i] + A;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int i = 0; // Starting index for the recursion
    cout<<f(arr, n, i)<<endl;

    return 0;
}