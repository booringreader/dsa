#include<iostream>
using namespace std;
// int main(){
//     int a,b;
//     char op;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"Enter the value of op: ";
//     cin>>op;
//     switch (op)
//     {
//     case '+':
//         cout<<"Addition of a and b is: "<<a+b<<endl;
//         break;
//     case '-':
//         cout<<"Substruction of a and b is: "<<a-b<<endl;
//         break;
//     case '*':
//         cout<<"Multiplication of a and b is: "<<a*b<<endl;
//         break;

//     case '/':
//         cout<<"Division of a and b is: "<<a/b<<endl;
//         break;

//     case '%':
//         cout<<"Modulo of a and b is: "<<a%b<<endl;
//         break;   
    
//     default:
//         break;
//     }
// }

int main(){
    int amount;
    int ans=amount;
    cout<<"Enter Amount: ";
    cin>>amount;
    char op;
    cout<<"Enter Operator: ";
    cin>>op;
    switch (op)
    {
    case '/':
        cout<<"The Notes of Hundred is: "<<amount/100<<endl;
        ans=amount%100;
        cout<<"The Notes of Fifty is: "<<ans/50<<endl;
        ans=ans%50;
        cout<<"The Notes of Twenty is: "<<ans/20<<endl;
        ans=ans%20;
        cout<<"The Notes of Ten is: "<<ans/10<<endl;
        ans=ans%10;
        cout<<"The Notes of one is: "<<ans/1<<endl;
        break;
    
    default:
        break;
    }
}