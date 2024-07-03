#include <iostream>
using namespace std;
void insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {4, 8, 7, 9, 2, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);

    return 0;
}