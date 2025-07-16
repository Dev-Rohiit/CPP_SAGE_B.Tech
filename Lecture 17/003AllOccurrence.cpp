#include<iostream>
using namespace std;
void f(int* arr, int t, int i){
    //base case
    if (i < 0){
        return; // Element not found
    }
    //recursive case
    if(arr[i]==t){
        cout<< i << " "; // Element found at index i
    }
    //Ask your friend to find the element in the rest of the array, i.e arr[i-1..n-1]
    f(arr, t, i-1);
}
int main(){
    int arr[] = {10,20,30,20,30};
    int n = sizeof(arr)/sizeof(int);
    int t = 30;
    f(arr, t,n-1);
    return 0;
}