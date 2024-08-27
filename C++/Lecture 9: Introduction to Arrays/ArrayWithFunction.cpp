#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[15]={2,7};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    printArray(arr, 15);
}