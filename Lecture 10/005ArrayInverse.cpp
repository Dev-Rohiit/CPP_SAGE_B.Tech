#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,0,4,1,3};
    int n = sizeof(arr)/sizeof(int);
    int brr[5];

    for (int i = 0; i < n; i++)
    {
        // int x = arr[i];
        // brr[x] = i;
        brr[arr[i]] = i;
    }

    cout << "Inverse array: ";
    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " "; // Print the inverse array
    }
    
    return 0;
}