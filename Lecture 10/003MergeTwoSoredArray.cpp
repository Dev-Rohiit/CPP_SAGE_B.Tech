#include<iostream>
using namespace std;
int main(){
    int arr1[] = {10,30,50,70};
    int arr2[] = {20,40,60};
    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);
    int i = 0;
    int j = 0;
    int finaArray[20];
    int final = 0;
    while (i<m && j<n)
    {
        if (arr1[i]<arr2[j])
        {
            finaArray[final] = arr1[i];
            i++;
            final++;
        }else{
            finaArray[final] = arr2[j];
            j++;
            final++;
        }
        while (i<m)
        {
            finaArray[final] = arr1[i];
            i++;
            final++;
        }
        while (j<n)
        {
            finaArray[final] = arr2[j];
            j++;
            final++;
        }
    }
    // Output the merged array
    for (int l = 0; l < m+n; l++)
    {
        cout<<finaArray[l]<<" ";
    }

    return 0;
}