#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int N){
    bool swapped;
    for(int i = 0 ; i < N - 1; i++){
        swapped = false;
        for(int j = 0 ; j < N - i  ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); 
                swapped = true;       
            }
        }
        if (swapped == false) // i.e. Array is already sorted
            break;
    }
}

void printArray(int arr[], int N){
    cout<<"\nArray : ";
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
    BubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}