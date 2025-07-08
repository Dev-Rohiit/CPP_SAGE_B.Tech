// n,
// m<=20
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the size of array: ";
    cin >> m>>n;
    int arr1[20];
    for (int i = 0; i < m; i++)
    {
        cin>> arr1[i];
    }
    int arr2[20];
    for (int i = 0; i < n; i++)
    {
        cin>> arr2[i];
    }
    
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (i>=0 and j>=0)
    {
        if (arr1[i]> arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        else{
            arr1[k] = arr2[j];
            j--;
            k--;
        }
        
    }
    while (j>=0)
    {
       arr1[k] = arr2[j];
       j--;
       k--;
    }
    
    for (int l = 0; l < m+n; l++)
    {
        cout<<arr1[l]<<" ";
    }

    return 0;
}