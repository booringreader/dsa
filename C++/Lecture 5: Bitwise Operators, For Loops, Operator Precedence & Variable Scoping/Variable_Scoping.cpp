#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pro=1;
    int sum=0;
    int r;
    while(n!=0){
        r=n%10;
        n=n/10;
        pro=pro*r;
        sum=sum+r;
    }
    cout<<"Product is: "<<pro<<endl<<"Sum is: "<<sum<<endl<<"and substract is: "<<pro-sum<<endl;
}