#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[10]={2,4,7,9,9,11,34,45,79, 89};
    cout<<firstOcc(arr, 5, 9)<<" ";
    cout<<lastOcc(arr, 5, 9)<<endl;

}