#include<iostream>
using namespace std;
int main(){
    int arr[] = {50,40,10,30,20};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]< arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap(arr[i], arr[minIndex]);
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    };

    return 0;
}