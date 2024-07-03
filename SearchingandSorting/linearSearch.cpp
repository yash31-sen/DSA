#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int *arr, int k)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= k; i++)
    {
        if (arr[i] == k)
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << linearSearch(arr, 8);
    return 0;
}