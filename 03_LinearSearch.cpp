#include <iostream>
using namespace std;

int LinearSearch(int arr[], int N, int key){
    for(int i = 0 ; i < N ; i++){
        if(key == arr[i])
            return i;
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

    int found = LinearSearch(arr, size, search);
    if(found!=-1)
        cout<<"Element found at index "<<found;
    else 
        cout<<"Element not found";
    return 0;
}