#include<iostream>
using namespace std;
string spellingMap[] = {"Zero", "One", "Two", "Three", "Four", 
                            "Five", "Six", "Seven", "Eight", "Nine"};
void f(int n){
    //base case
    if (n==0){
        return; // No more digits to process
    }
    //recursive case
    //1. ask your friend to spell the number n/10
    f(n/10);
    //2. print the spelling of the last digit
    // int digit = n%10; // get the last digit
    // string spelling = spellingMap[digit];
    // cout << spelling << " ";
    cout<<spellingMap[n%10]<<" ";
}
int main(){
    int n = 123;
    f(n);
    return 0;
}