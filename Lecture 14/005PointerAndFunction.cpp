#include<iostream>
using namespace std;

//pass By Reference
void inc(int& a){
    cout<<a<<" inside inc() before incrementing"<<endl;
    a++;
    cout<<a<<" inside inc() after incrementing"<<endl;
}
// pass by value
// void inc(int a){
//     cout<<a<<" inside inc() before incrementing"<<endl;
//     a++;
//     cout<<a<<" inside inc() after incrementing"<<endl;
// }

//pass the arguments by using pointer
void inc(int* aptr){
    (*aptr)++;
}
int main(){
    int a = 10;

    cout<<a<<" inside main() before inc()"<<endl;
    // inc(a);
    inc(&a);
    cout<<a<<" inside main() after inc()"<<endl;


    return 0;
}