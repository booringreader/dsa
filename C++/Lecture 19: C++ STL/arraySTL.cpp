#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 4>a={1,2,3,4};
    int size=a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

    cout<<"Element at 3rd Index: "<<a.at(3)<<endl;
    cout<<"Elemrnt at 2nd Index: "<<a.at(2)<<endl;
    cout<<"Array is empty or not: "<<a.empty()<<endl;
    cout<<"First Elememt of the array: "<<a.front()<<endl;
    cout<<"Last element of the array: "<<a.back()<<endl;

    cout<<"Wow!, that's great"<<endl;

}