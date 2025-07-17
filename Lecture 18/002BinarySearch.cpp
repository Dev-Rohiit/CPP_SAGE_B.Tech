#include<iostream>
using namespace std;
int f(int* arr, int t, int s, int e){
    //base case
    if (s>e)
    {
        return -1; // Element not found
    }
    //recursive case
    int m = s+(e-s)/2;
    if (arr[m]==t){
        return m; // Element found at index m
    }else if(arr[m]>t){
        f(arr,t,s, m-1);
    }else{
        f(arr, t, m+1, e);
    }
}

int main(){
    int arr[] = {10, 40, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int t = 30;
    cout<<f(arr,t,0,n-1)<<endl;
    return 0;
}