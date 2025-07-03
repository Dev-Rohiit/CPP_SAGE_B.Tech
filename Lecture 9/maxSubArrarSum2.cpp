//constraint n<=100
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(n);
    int CSum[101];
    CSum[0] = 0;
    for (int i = 1; i <= n; i++){
        CSum[i] = CSum[i-1]+arr[i-1];
    }
    int max_sum = INT_MIN;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j <= n-1; j++)
        { 
            int sum = CSum[j+1]-CSum[i];
            if (sum > max_sum)
                {
                    max_sum = sum;
                }
        }
        
    }
    cout << "Maximum SubArray sum: " << max_sum << endl;
    
    
    return 0;
}