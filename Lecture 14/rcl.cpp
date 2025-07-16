#include<iostream>
using namespace std;
int f(int* arr, int n, int t, int i){
    //base case
    if (i==n)
    {
        return -1;
    }
    //recursive case
    if (arr[i]==t)
    {
        return i;
    }
    //1. ask your friend to find the element in the rest of the array, i.e arr[i+1...n-1];
    f(arr, n,  t, i+1);
}

int main(){
    int arr[] = {10,20,30,20,30};
    int n = sizeof(arr)/sizeof(int);
    int t = 30;
    cout<<f(arr,n,t,0)<<endl;
    return 0;
}