#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);

    int t = 60;
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        int m = s+(e-s)>>2;
        if(arr[m]==t){
            cout<<t<<" found at index "<<m<<endl;
            break; // target found
        }else{
            if (arr[m]>t)
            {
                e = m-1; // search in the left half
            }else{
                s = m+1; // search in the right half
            }
            
        }
    }
    if(s>e){
        cout<<"Element not Found"<<endl;
    }

    return 0;
}