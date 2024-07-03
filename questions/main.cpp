// 📌find next greater element (do it using stack)
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         int b = a[i];
//         bool temp = false;
//         int val = -1;
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 val = a[j];
//                 temp = true;
//                 break;
//             }
//             else
//             {
//                 continue;
//             }
//         }
//         if (temp == true)
//         {
//             cout << val << " ";
//         }
//         else
//         {
//             cout << -1;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 4;
//     int temp;
//     //5 4 3 2 1

//     for (int i = 0; i < n/2; i++)
//     {   temp=arr[i];//2
//         arr[i]=arr[n-i];//4
//         arr[n-i]=temp;//3
//     }
//     for (int i : arr)
//     {
//         cout << i << " ";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4; // 1  1
//     int arr[n] = {1, 3, 5, 2, 2};
//   int n1=2;
//     int arr1[n1] = {3, 5, 2};
//     bool b = false;
//     for (int i = 0; i <=n; i++)
//     {
//         cout<<arr[i]<<" "<<arr1[i]<<endl;
//         if (arr[i] == arr1[i])
//         {
//             for (int j = 0; j <n1; j++)
//             {
//                 if (arr[j] == arr1[j])
//                 {
//                     b = true;
//                     cout<<arr[j]<<" ";
//                 }
//             }
//             if (b == true)
//             {
//                 break;
//             }
//         }
//     }
//     cout<<b;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fun(int *arr, int n)
// {
//     int sum = 0;
//     if(n==0){
//         return sum;
//     }
//     return sum=sum+fun(arr,n-1);
// }
// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     cout<<fun(a,5);
//     return 0;
// }

// adding two meterices:

// #include<iostream>
// using namespace std;

// int main(){
//     int a[2][2]={{1,2},{3,4}};
//     int b[2][2]={{1,2},{3,4}};
//     int c[2][2];
//     for(int i=0;i<sizeof(a[0])/sizeof(a[0][0]);i++){
//         for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
//           c[i][j]=a[i][j]+b[i][j];
//         }

//     }
//      for(int i=0;i<sizeof(a[0])/sizeof(a[0][0]);i++){
//         for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
//           cout<<c[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// maximum produxt subarray
// if the arrray is while positive then product of whole array is ans
// if the array has even number of -ve values then the then also the product of whole array will be the output
//  if it has odd number of -ve indexes then we have to apply algorithms to get it
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int n = 4;
//      int a[n] = {2, 3, -2, 4};
//      int prod = 1;
//      int max_ = INT_MIN;
//      for (int i = 0; i < n; i++)
//      {

//         for (int j = i; j < n; j++)
//         { prod = 1;

//             for (int k = i; k <= j; k++)
//             {
//                 prod *= a[k];
//             }
//             max_ = max(prod, max_);
//         }
//     }
//     cout << max_;
// }

// we can als0 do the same with only 2 loops
// "In the second method, the product is accumulated by multiplying the current product with the next element as it iterates through the array. This allows us to build the product of the subarray incrementally without recalculating from the start for each subarray.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 4;
//     int a[n] = {2, 3, -2, 4};
//     int prod = 0;
//     int max_ = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         prod = 0;

//         for (int j = i; j < n; j++)
//         {

//             prod += a[j];

//             max_ = max(prod, max_);
//         }
//     }
//     cout << max_;
// }

// new approach no kadens but more new one
/*
apply any algorithm in case of odd number of -ve numbers in the array
try to remove/ignore one negetive number from the prefix or suffix of array not from the middle because we need a maximum size sub arry, but if we divide it from middle or somewhere in the middle then array get divided into two small parts
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 4;
//     int a[n] = {2, 3, -2, 4};
//     int l = 0;
//     int r = 0;
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // l = (l == 0) ? 1 : l;
//         // r = (r == 0) ? 1 : r;
//         l += a[i];
//         r += a[n - 1 - i];
//         res = max({res, l, r});
//     }
//     cout << res;
//     return 0;
// }

// unique number when others are present exactly 2 times in the array:
//  int n=0;
//  for(int i=0;i<nums.size();i++){
//      n^=nums[i];
//  }
//  return n;

// //maximum and minimum from every subarray
// #include <bits/stdc++.h>
// using namespace std;
// int findMax(int *a, int s, int e)
// {
//     int max_ = INT_MIN;
//     for (int i = s; i <= e; i++)
//     {
//         max_ = max(a[i], max_);
//     }
//     return max_;
// }

// int main()
// {
//     int n = 5;
//     int a[n] = {1, 20, 3, 34, 5};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int max_val = findMax(a, i, j);
//             cout << "Subarray: ";
//             for (int k = i; k <= j; k++)
//             {
//                 cout << a[k] << " ";
//             }
//             cout << " => Max: " << max_val << endl;
//         }
//     }
//     return 0;
// }

// pairs with given cum
//  there are two different approaches for solving this problem
//  if the array is sorted and 2nd if the array is not sorted

// 1)for sorted:

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int a[n] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int count = 0;
//     int i = 0;
//     int j = n-1 ;
//     int k = 8;
//     while (i < j)
//     {
//         int sum = a[i] + a[j];
//         if (sum == k)
//         {
//             count++;
//             i++;
//             j--;
//         }
//         else if (sum < k)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout << count;
//     return 0;
// }
// 2)if not sorted then simply sort the array first and then apply the same

// number of pairs whose avg is present in the array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int a[n] = {4, 2, 5, 1, 3, 5};
//     int count = 0;
//     unordered_set<int> st(a, a + n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             // cout << "{" << a[i] << " " << a[j] << "}" << " ";
//             int sum = a[i] + a[j];
//             // cout << sum / 2 << " ";

//                 if (sum % 2 == 0 && st.find(sum / 2) != st.end())
//                 {
//                     count++;
//                 }

//         }
//         // cout<<endl;
//     }
//     cout << count;
// }

// unique path in matrix:
//   1)   if(m==1||n==1)return 1;
//      return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);

// 2)
// int uniquePaths(int m, int n) {
//         vector<vector<int>>db(m,vector<int>(n,1));
//         for(int i=1;i<m;i++){
//             for(int j=1;j<n;j++){
//                 db[i][j]=db[i-1][j]+db[i][j-1];
//             }
//         }
//         return db[m-1][n-1];
//     }
// };

// Convert matrix into lower triangular matrix (56)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4, m = 4;
//     int a[n][m] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {

//             if(i<j){
//                 a[i][j]=0;
//             }
//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Write code to divide and multiply a number with 2 without using arithmetic operator (72)

#include <iostream>
using namespace std;

int main()
{
    int n=40;
    int div=n>>1;
    int mul=n<<1;
    cout<<div<<" "<<mul;
    return 0;
}