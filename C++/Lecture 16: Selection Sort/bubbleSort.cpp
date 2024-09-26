#include <iostream>
using namespace std;
void printArray(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {5, 3, 2, 8, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n -i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        // printArray(arr, n);
    }
    printArray(arr, n);
}