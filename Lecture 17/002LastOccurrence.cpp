#include<iostream>
using namespace std;
int f(int* arr, int t, int i){
    //base case
    if (i < 0){
        return -1; // Element not found
    }
    //recursive case
    // search for the index of the last occ. of the 't' in x[0...i]
    if(arr[i]==t){
        return i; // Element found at index i
    }
    //ask your friend to search for the index of the last occ. of the 't' in x[0...i-1]
    return f(arr, t, i-1);
}
int main(){
    int arr[] = {10,20,30,20,30};
    int n = sizeof(arr)/sizeof(int);
    int t = 30;
    cout<<f(arr, t,n-1)<<endl;
    return 0;
}