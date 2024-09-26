#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of the set: "<<s.size()<<endl;
    s.erase(s.begin());
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<"size of the set: "<<s.size()<<endl;
    cout<<endl;
    s.clear();
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of the set: "<<s.size()<<endl;
    cout<<"the set empty or not: "<<s.empty()<<endl;

}