#include<iostream>
using namespace std;
void update(int num[], int size){
    cout<<"Inside the update function"<<endl;

    // updating array

    num[0]=120;

    for(int i=0; i<4; i++){
        cout<<" "<<num[i];
    }
    cout<<endl;

    cout<<"going back to main function"<<endl;
}
int main(){
    int arr[4]={3,7,9,1};
    update(arr, 4);

    for(int i=0; i<4; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    
}