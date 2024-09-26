#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Meena");
    s.push("Raj");

    cout<<"Print top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Print top element: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;

    cout<<"empty or not: "<<s.empty()<<endl;
} 
