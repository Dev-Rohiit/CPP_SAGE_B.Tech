#include<iostream>
#include<cmath>
using namespace std;
float AreaOfTriangle(int a, int b){
    return 0.5 * a * b; // Calculate the area of the triangle using the formula: Area = 0.5 * base * height
}

float computeSum(int a, int b, int c){
    float s = (a+b+c)/2;
    return s; // Calculate the semi-perimeter of the triangle
}

float AreaOfTriangle(int a, int b, int c){
    float s = computeSum(a , b, c); // Calculate the semi-perimeter of the triangle
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    cout<< AreaOfTriangle(2,3)<<endl; // Call the function with base 2 and height 3;
    cout<< AreaOfTriangle(6,7,9)<<endl;
}