#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10]={3, 44, 66, 65, 34, 1, 6, 7 ,899, 3};
    int key;
    cout<<"enter the value of key: ";
    cin>>key;
    bool found=search(arr, 10, key);
    if(found){
        cout<<key<<" is present"<<endl;
    }else{
        cout<<key<<" is not present"<<endl;
    }
}