#include<iostream>
using namespace std;
int getMin(int arr[], int size){
    int min=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size){
    int maxi=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        maxi=max(maxi, arr[i]);
    }
    return maxi;
    
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Minimum number is: "<<getMin(arr, size)<<endl;;
    cout<<"Maximum number is: "<<getMax(arr, size)<<endl;
}