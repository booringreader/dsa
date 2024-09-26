#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    cout<<"Print first index of the array: "<<d.at(0)<<endl;
    cout<<"first element: "<<d.front()<<endl;
    cout<<"last element: "<<d.back()<<endl;
    cout<<"tis is empty or not: "<<d.empty()<<endl;
    cout<<"Before Erase: "<<d.size()<<endl;
    d.erase(d.begin());
    cout<<"After Erase: "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;


    
}