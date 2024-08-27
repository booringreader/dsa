#include <iostream>
using namespace std;
#include <vector>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
void sortOne(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
    if(arr[left]==1 && arr[right]==0 && left<right)
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    cout << endl;
}
int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    
    sortOne(arr, 8);
    printArray(arr, 8);
}