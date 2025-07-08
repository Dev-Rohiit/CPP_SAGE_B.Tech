//constraint n<=100
#include<iostream>
using namespace std;
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(n);
    int x[100];
    x[0] = arr[0];
    int maxsum = x[0];
    for (int i = 1; i < n; i++)
    {
        x[i] = max(x[i-1]+ arr[i], arr[i]);
        if (x[i]>maxsum)
        {
            maxsum = x[i];  
        }
        
    }
    cout << "Maximum SubArray sum: " << maxsum << endl;
    
    return 0;
}