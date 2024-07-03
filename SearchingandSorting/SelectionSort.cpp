#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int mi = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mi] > arr[j])
            {
                mi = j;
            }
            swap(arr[i], arr[mi]);
        }
        for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    }
}

int main()
{
    int arr[] = {4, 5, 798, 652, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
