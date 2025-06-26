#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
        int rn = sqrt(n);
        for (int i = 2; i <=rn; i++)
        {
            if (n%i==0)
            {
                return false;
            }
            
        }
        return true;
        
    }
void printPrime(int N){
    for (int n = 2;  n<=N; n++)
    {
        if (isprime(n))
        {
            cout<<n<<" "; // Print the prime number
        }
        
    }
}
int main(){

    int N;
    cout<<"Enter the number: ";
    cin>>N;
    printPrime(N);
    return 0;
}