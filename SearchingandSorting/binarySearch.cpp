#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}



int recursiveBinarySearch(int *arr,int s,int e,int k){
   if(s>e){
    return -1;
   } 
   int mid=s+(e-s)/2;
   
       
        if(k==arr[mid]){
            return mid;
        }
        else if(k<arr[mid]){
            recursiveBinarySearch(arr,s,mid-1,k);
        }
        else{
            recursiveBinarySearch(arr,mid+1,e,k);
            }
    
}

int main()
{
    // int arr[10] = {1, 50, 60, 89, 99, 100, 105, 1098, 2000, 2005};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << binarySearch(arr, n, 1098)<<endl;
    // cout << recursiveBinarySearch(arr,0, n-1, 100);
    unsigned int a=-10;
    cout<<a;

    return 0;
}
