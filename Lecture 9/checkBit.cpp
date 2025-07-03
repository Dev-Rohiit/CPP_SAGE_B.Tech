#include<iostream>
using namespace std;
int main(){

int n = 42;
// int k = 3;
int k = 4;
cout << "The " << k << "th bit of " << n << " is: ";
if ((n >> k) & 1) {
    cout << "1" << endl;
} else {
    cout << "0" << endl;
}
    return 0;
}
