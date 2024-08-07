#include<iostream>
using namespace std;
// int main(){
//     int n;
//      cin>>n;
//      for(int i=1; i<=n; i++){
//         cout<<i<<endl;
//      }
// }


// fibonacci Series 

// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1; i<=n; i++){
//         int nextNum=a+b;
//         cout<<nextNum<<" ";
//         a=b;
//         b=nextNum;
//     }
//     cout<<endl;
// }


// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     bool isPrime=1;
//     for(int i=2; i<n;i++){
//         if(n%i==0){
//             isPrime=0;
//             break;
//         }
//     }
//     if(isPrime==0){
//         cout<<"not prime"<<endl;
//     }else{
//         cout<<"prime"<<endl;
//     }
// }


// int main(){
//     for(int i=1;i<=15;i+=2){
//         cout<<i<<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<"  "<<j<<endl;
        }
    }
}