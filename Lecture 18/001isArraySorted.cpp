#include<iostream>
using namespace std;
int f(int* arr, int n, int i){
    // base case
    if (i==n-1)
    {
        return true;
    }
        //recursive case
        return arr[i]<arr[i+1] and f(arr, n, i+1);
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    f(arr, n, 0)? cout<<"Array is Sorted":
                  cout<<"Array is not Sorted";

    return 0;
}