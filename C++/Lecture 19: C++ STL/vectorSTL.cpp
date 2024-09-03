#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    vector<int>v(5, 2);
    vector<int>last(v);
    cout<<"print vector"<<endl;
    for(int i:last){
        cout<<i<<" ";
    } 
    cout<<endl;
    cout<<"Capacity of the vector: "<<a.capacity()<<endl;
    a.push_back(1);
    cout<<"Capacity of the vector: "<<a.capacity()<<endl;
    a.push_back(2);
    cout<<"Capacity of the vector: "<<a.capacity()<<endl;
    a.push_back(3);
    cout<<"Capacity of the vector: "<<a.capacity()<<endl;
    cout<<"Size of the vector    : "<<a.size()<<endl;
    cout<<"Element at the index 2nd: "<<a.at(2)<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"--------Before Pop---------"<<endl;
    for(int i:a){
        cout<<i<<" "<<endl;
    }
    a.pop_back();
    cout<<"--------After Pop---------"<<endl;
    for(int i:a){
        cout<<i<<" "<<endl;
    } 

    cout<<"before clear size: "<<a.size()<<endl;
    a.clear();
    cout<<"After clear size: "<<a.size()<<endl;
    
}