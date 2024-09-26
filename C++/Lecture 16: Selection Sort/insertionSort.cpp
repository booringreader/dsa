#include<iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={4,6,3,7,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    printArray(arr, n);
}