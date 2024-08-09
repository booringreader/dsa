#include<iostream>
using namespace std;



// int nCr(){
//     int a, b;
//     cin>>a>>b;
//     int ans=1;
//     int r=1;
//     for(int i=a; i>b; i--){
//         ans=ans*i;
        
//     }
//     for(int i=(a-b);i>=1;i--){
//             r=r*i;
//         }
//     return ans/r;
// }
// int main(){
//     cout<<nCr()<<endl;

// }


int factorial(int n){
    int fact=1;
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    return ans;
}
int main(){
    cout<<nCr(8, 0)<<endl;
}