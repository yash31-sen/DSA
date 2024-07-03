    #include <bits/stdc++.h>
    using namespace std;

    int partition(int *arr, int s, int e)
    {
        int pivot = arr[s];
        int count = 0;
        for (int i = s; i <= e; i++)
        {
            if (arr[i] < pivot)
            {
                count++;
            }
        }
        int pivotIndex = s + count;
        swap(arr[s], arr[pivotIndex]);
        int i = s, j = e;
        while (i < pivotIndex and j > pivotIndex)
        {
            while (arr[i] < pivot)
            {
                i++;
            }
            while (arr[j] > pivot)
            {
                j--;
            }
            if (i < pivotIndex and j > pivotIndex)
            {
                swap(arr[i], arr[j]);
            }
        }
        return pivotIndex;
    }

    void quickOsrt(int *arr, int s, int e)
    {
        if (s >= e)
        {
            return;
        }
        int p = partition(arr, s, e);
        quickOsrt(arr, s, p - 1);
        quickOsrt(arr, p + 1, e);
    }

    int main()
    {
        int arr[] = {1, 2, 4, 8, 7, 8, 5, 52};
        int s = 0;
        int n = sizeof(arr) / sizeof(arr[0]);
        int e = n - 1;
        quickOsrt(arr, s, e);
        for (int i = 0; i < e; i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }