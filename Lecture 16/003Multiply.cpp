#include<iostream>
using namespace std;
int f(int x, int y){
    //base case
    if (y==0){
        return 0;
    }
    //Recursive case
    //1.ask your friend to compute the x+(y-1).
    int A = f(x, y-1);
    return x + A;
}
int main(){
    int x = 3;
    int  y = 4;
    cout<<f(x,y)<<endl;
    return 0;
}