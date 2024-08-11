#include <iostream>
using namespace std;
// int power()
// {
//     int a, b;
//     cout << "Enter the value of a And b: ";
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = a * ans;
//     }
//     return ans;
// }
// int main()
// {
//     int answer = power();
//     cout << "Answer is :" << answer << endl;
//     answer = power();
//     cout << "Answer is :" << answer << endl;
//     answer = power();
//     cout << "Answer is :" << answer << endl;
//     answer = power();
//     cout << "Answer is :" << answer << endl;
// }

bool isEven(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int num;
    cout<<"Enter the value of num: ";
    cin>>num;
    if(isEven(num)){
        cout<<"Number is Even"<<endl;
    }else{
        cout<<"Number is Odd"<<endl;
    }

}