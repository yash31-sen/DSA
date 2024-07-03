#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "soemeone";
    string ss = "emeo";
    bool f=false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ss[0])
        {
            string temp = "";
            for (int j = i; j < s.size(); j++)
            {
                temp += s[j];
                if (temp == ss)
                {
                    f=true;
                    break;
                }
            }
        }
    }
    cout<<f;
    return 0;
}
