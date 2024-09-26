#include<iostream>
using namespace std;
int printArray(int arr[], int m){
    for(int i=0; i<m; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int main(){
    int arr[6]={5,3,2,8,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1; i++){
        int midIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[midIndex]>arr[j]){
                midIndex=j;
            }
        }
        swap(arr[midIndex], arr[i]);
        printArray(arr, n);
    }
    printArray(arr, n);
}