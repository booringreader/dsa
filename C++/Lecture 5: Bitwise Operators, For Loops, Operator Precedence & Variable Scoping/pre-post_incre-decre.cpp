#include<iostream>
using namespace std;

// int main(){
//     int a, b=1;
//     a=10;
//     if(++a){
//         cout<<b;
//     }
//     else{
//         cout<<++b;
//     }
// }

int main(){
    int a, b=2;
    a=1;
    if(a-- >0 && ++b>2){
        cout<<"stage 1"<<endl;
    }
    else{
        cout<<"stage 2"<<endl;
    }
    cout<<a<<b<<endl;
}