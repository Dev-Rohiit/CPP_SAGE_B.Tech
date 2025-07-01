#include<iostream>
using namespace std;
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(n);
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j <= n-1; j++)
        {
            for(int k=i; k<= j; k++){
                cout<<arr[k]<<" "; 
            }
            cout<<endl;
        }
        
    }
    
}