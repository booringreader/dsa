#include<iostream>
using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter the value of Ch"<<endl;

//     cin>>ch;
//     if(97<=ch && ch>=122){
//         cout<<"It's Lower Case Character"<<endl;
//     }
//     else if(64<=ch && 91>=ch){
//         cout<<"It's Upper Case Character"<<endl;
//     }
//     else{
//         cout<<"It's Numeric Value"<<endl;
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<sum<<endl;
// }


// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=2;
//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//     }
//     cout<<sum<<endl;
// }


// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<n<<" is a Even Number."<<endl;
//     }
//     else{
//         cout<<n<<" is not a Odd Number."<<endl;
//     }
// }

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=2;
    while(n>i){
        if(n%i==0){
        cout<<n<<" is a Prime Number."<<endl;
    }
    else{
        cout<<n<<" is not a Prime Number."<<endl;
    }
    i++;
    }
}