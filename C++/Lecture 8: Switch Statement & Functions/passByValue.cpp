#include<iostream>
using namespace std;
// void dummy(int n){
//     n++;
//     cout<<"n is "<<n <<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     dummy(n);
//     cout<<"the number is "<<n<<endl;

// }


int update(int a){
    int ans=a*a;

    return ans;
}

int main(){
    int a=15;
    a=update(a);
    cout<<"the number is "<<a<<endl;

}

