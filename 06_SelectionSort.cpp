#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int N){
    for(int i = 0 ; i < N - 1. ; i++){
        int min = i;
        for(int j = i+1 ; j < N ; j++){
            if(arr[j] < arr[min]) // Ascending
                min = j;
        }
        swap(arr[min], arr[i]); 
    }
}

void printArray(int arr[], int N){
    for(int i = 0 ; i < N ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int size, search;
    cout<<"Enter number of elements in array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in the array : ";
    for(int i = 0 ; i < size; i++)
        cin>>arr[i];

    printArray(arr, size);
    SelectionSort(arr, size);
    printArray(arr, size);    
    return 0;
}