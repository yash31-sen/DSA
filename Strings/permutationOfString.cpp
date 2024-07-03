/*approach 1 using inbuild liberary
for n size of string there are n! permutations
*/

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string str = "ABC";
//     sort(str.begin(), str.end()); // Sort the string for next_permutation
//     while (next_permutation(str.begin(), str.end()))
//     {
//         cout << str << " ";
//     }
//     return 0;
// }

/*approach 2: using recursion*/

#include <bits/stdc++.h>
using namespace std;

void permute(string &s, int n, int index)
{
    if (index >= n)
    {
        cout << s << " ";
        return;
    }
    for (int i = index; i < n; i++)
    {
        swap(s[index], s[i]);
        permute(s, n, index + 1);
        swap(s[index], s[i]);
    }
}
int main()
{
    string s = "ABC";
    int n = s.size();
    int index = 0;

    permute(s, n, index);

    return 0;
}
