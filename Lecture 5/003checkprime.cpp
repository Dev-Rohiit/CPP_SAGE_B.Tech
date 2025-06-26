#include<iostream>
#include<cmath>
using namespace std;

    bool isprime(int n){
        for (int i = 2; i <=sqrt(n); i++)
        {
            if (n%i==0)
            {
                return false;
            }
            
        }
        return true;
        
    }
int main(){

    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    isprime(n);
    isprime(n)? cout<<n<<" is prime"<<endl: cout<<n<<" is not prime"<<endl;

    return 0;
}