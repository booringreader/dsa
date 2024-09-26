#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(8);
    queue<int>a(q);

    cout<<"print the front element: "<<q.front()<<endl;
    cout<<"print the back element: "<<q.back()<<endl;
    cout<<"print size of the queue: "<<q.size()<<endl;
    q.pop();
    cout<<"print size of the queue: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    cout<<"--------------copied queue---------------"<<endl;
    cout<<"print size of the queue: "<<a.size()<<endl;
    cout<<"print the back element: "<<a.back()<<endl;
    a.pop();
    cout<<"print size of the queue: "<<a.size()<<endl;
    cout<<"print the front element: "<<a.front()<<endl;
    cout<<"print the back element: "<<a.back()<<endl;

}