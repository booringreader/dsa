#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    switch (num)
    {
    case 1:
        cout << "first " << endl;
        break;

    case 2:
        cout << "second " << endl;
        break;

    case 3:
        cout << "third " << endl;
        break;

    case 4:
        cout << "first " << endl;
        break;

    default:
        cout<<"Not find any matching"<<endl;
        break;
    }
}