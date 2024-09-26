#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    for(int i=(size-1); i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[9]={2,3,4,5,5,6,7,8,8};
    reverse(arr, 9);
}


void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[9]={2,3,4,5,5,6,7,8,8};
    reverse(arr, 9);
    printArray(arr, 9);
}


