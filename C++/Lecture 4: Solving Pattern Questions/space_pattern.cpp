#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (n>=i)
//     {
//         int space=n-i;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while (i>=j)
//         {
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (n>=i)
//     {
//         int star=n-i+1;
//         int j=1;
//         while (star>=j)
//         {
//             cout<<" *";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=i-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=i-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=n-i+1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=i-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=n-i+1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

int main()
{
    int n;
    cout << "Entert the value of n: ";
    cin >> n;
    int i = 1;
    while (n >= i)
    {
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j = 1;
        while (i >= j)
        {
            cout <<j;
            j++;
        }

        int k = i-1;
        while (k)
        {
            cout <<k;
            k--;
        }
        i++;
        cout << endl;
    }
}
