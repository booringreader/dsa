#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Meena";
    m[2] = "Raj";
    m[12] = "Bahadur";
    // m.insert( {5, "Lovekush"});
    cout<<"Before Erase---------"<<endl;
    for (auto i:m)
    {
        cout << i.first << " " << endl;
    }
    cout<<"Finding -2 : "<<m.count(-2)<<endl;

    m.erase(12);
    cout<<"Before Erase---------"<<endl;
    for (auto i:m)
    {
        cout << i.first << " " << endl;
    }

    auto it=m.find(1);
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}