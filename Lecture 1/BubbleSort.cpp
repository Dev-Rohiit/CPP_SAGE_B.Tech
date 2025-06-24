#include<iostream>
using namespace std;
int main(){
    int arr[] = {33,45,32,78,9};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 1; i<=n-1; i++){
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]> arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }

        }
        
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}