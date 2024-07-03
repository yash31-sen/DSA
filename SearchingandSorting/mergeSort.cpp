#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int arr1[len1];
    // int *arr1 = new int[len1];
    // int *arr2 = new int[len2];
    int arr2[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }
    // array copy done

    // merging arrays
    int id1 = 0; // array1 index
    int id2 = 0; // array2 index
    k = s;       // main array index
    while (id1 < len1 and id2 < len2)
    {
        if (arr1[id1] < arr2[id2])
        {
            arr[k++] = arr1[id1++];
        }
        else
        {
            arr[k++] = arr2[id2++];
        }
    }

    while (id1 < len1)
    {
        arr[k++] = arr1[id1++];
    }
    while (id2 < len2)
    {
        arr[k++] = arr2[id2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[] = {1, 2, 4, 8, 7, 8, 5, 52, 98};
    int s = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int e = n - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}