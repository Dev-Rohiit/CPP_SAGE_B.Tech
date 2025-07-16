#include<iostream>
using namespace std;
int f(int* arr, int t, int i){
    //base case
    if (i < 0){
        return -1; // Element not found
    }
    //recursive case
    if(arr[i]==t){
        return i; // Element found at index i
    }
    //Ask your friend to find the element in the rest of the array, i.e arr[i-1..n-1]
    return f(arr, t, i-1);
}
int main(){
    int arr[] = {10,20,30,20,30};
    int n = sizeof(arr)/sizeof(int);
    int t = 30;
    cout<<f(arr, t,n-1)<<endl;
    return 0;
}