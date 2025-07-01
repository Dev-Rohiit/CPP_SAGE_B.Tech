#include<iostream>
using namespace std;

void inc(int& a){
    cout<<a<<" inside inc() before incrementing"<<endl;
    a++;
    cout<<a<<" inside inc() after incrementing"<<endl;
}
int main(){
    int a = 0;
    cout<<a<<" inside main() before inc()"<<endl;
    inc(a);
    cout<<a<<" inside main() after inc()"<<endl;


    return 0;
}