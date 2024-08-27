#include<iostream>
using namespace std;

bool isPossible(int boards[], int n, int k, int mid){
    int painterCount=1;
    int boardSum=0;
    for(int i=0; i<n; i++){
        if(boardSum+boards[i]<=mid){
            boardSum+=boards[i];
        }else{
            painterCount++;
            if(painterCount>mid || boards[i]>mid){
                return false;
            }
            boardSum+=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(int boards[], int size, int k)
{
    int s=0;
    int sum=0;
    int n=size-1;
    for(int i=0; i<n; i++){
        sum+=boards[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(boards, n, k, mid)){
            ans=mid;
            e = mid - 1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[6]={2,1,5,6,2,3};
    cout<<findLargestMinDistance(arr, 6, 2)<<endl;
}