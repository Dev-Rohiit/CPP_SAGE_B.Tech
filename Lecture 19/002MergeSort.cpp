#include<iostream>
using namespace std;

void merge(int* arr, int s, int m, int e){
    int i=s;
    int j= m+1;
    int k=s;
    int temp[100]; // Temporary array to hold the merged result
    while (i<=m and j<=e){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i<=m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j<=e)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int l = s; l <= e; l++)
    {
        arr[l] = temp[l];
    }
    
}
void mergeSort(int* arr, int s, int e){
    //base case
    if (s == e){
        return; // No need to sort if the subarray has 0 or 1 element
    }
    //recursive case..
    //1.divide the given array into 2 sub array around the mid point
    int m = s+(e-s)/2;

    //2.Recursively sort the 2 sub array->ask your friend
    mergeSort(arr, s, m); // sort the left sub array
    mergeSort(arr, m+1, e); // sort the right sub array

    //3.merge the 2 sorted sub arrays into a single sorted array
    merge(arr,s,m,e);
}

int main(){
    int arr[] = {50,40,30,20,10};
    int n = sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}