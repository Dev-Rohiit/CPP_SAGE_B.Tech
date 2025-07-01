#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30};
    int n = sizeof(arr)/sizeof(int);
    for (int num = 0; num<(1<<n); num++)
    {
        for (int i = 0; i <=n-1; i++)
        {
            if ((num>>i)&1) 
            {
                cout<<arr[i]<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}