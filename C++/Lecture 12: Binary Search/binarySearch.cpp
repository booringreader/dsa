#include <iostream>
using namespace std;
int search(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s+(e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s+(e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {2, 4, 7, 8, 9, 15};
    int key = 8;
    cout << search(arr, 6, key) << endl;
}