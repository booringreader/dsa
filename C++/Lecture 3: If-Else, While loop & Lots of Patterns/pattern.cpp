#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int i=1;
    
//     while (n>=i){
//         int j=1;
//         while (n>=j)
//         {
//             cout<<" * ";
//             j++;
//         }
//         i++;
//         cout <<endl;
//     }
    
// }

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    
    while (n>=i){
        int j=1;
        while (n>=j)
        {
            cout<<i<<" ";
            j++;
        }
        i++;
        cout <<endl;
    }
    
}