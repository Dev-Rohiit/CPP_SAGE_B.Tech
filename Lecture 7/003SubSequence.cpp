#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30};
    int n = sizeof(arr)/sizeof(int);
    for (int num = 0; num<(1<<n); num++)
    {
        for (int k = 0; k <=n-1; k++)
        {
            if ((num>>k)&1) 
            {
                cout<<arr[k]<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}