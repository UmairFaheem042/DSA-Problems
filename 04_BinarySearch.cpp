#include <iostream>
using namespace std;

int BinarySearch(int arr[], int N, int key){
    int beg = 0, end = N-1;
    while(beg <= end){
        int mid = beg + (end - beg)/2;
        if(key == arr[mid])
            return mid;
        else if(key < arr[mid])
            end = mid - 1;
        else    
            beg = mid + 1;
    }
    return -1;
}

void printArray(int arr[], int N){
    cout<<"Array : ";
    for(int i = 0 ; i < N ; i++)
        cout<<arr[i]<<" ";
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

    cout<<"\nEnter element to search : ";
    cin>>search;

    int found = BinarySearch(arr, size, search);

    if(found!=-1)
        cout<<"Element found at index "<<found;
    else 
        cout<<"Element not found";
}