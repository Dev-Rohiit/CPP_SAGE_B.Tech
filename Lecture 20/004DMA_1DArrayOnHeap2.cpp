#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the Value of n: ";
    cin>>n;
    //allocate memory for a 1D array on the heap memory
    int* ptr = new int[n];

    //read values in the 1D array
    for(int i=0; i<n; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> ptr[i];
    }
    
    //print values in the 1D array
    for (int i = 0; i < n; i++) {
        cout<<ptr[i]<<" ";
    }
    cout << endl;
    
    
    //deallocate memory for 1D array
    delete [] ptr;


}