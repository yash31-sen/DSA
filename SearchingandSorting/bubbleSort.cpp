#include <iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
    bool swap1;
    for (int i = 0; i < n - 1; i++)
    { // rounds loop
        swap1 = false;
        for (int j = 0; j < n - i - 1; j++)
        { // comparision loop
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // to optimize it we can check here if at any comparision loop there is no swapping that
                // means the array is sorted no need to run other round just come out and break
                swap1 = true; //<-
            }
        }
        if (swap1 == false)
        { //<-
            break;
        }
    }
}
int main()
{
    int arr[] = {4, 8, 7, 9, 2, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}