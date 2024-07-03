#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s="yash sen is working with her";
   s+=" ";
   vector<string>v;
       string temp="";
   for(int i=0;i<s.size();i++){
       if(s[i]==' '){
           v.push_back(temp); temp="";
       }
       else{
           temp+=s[i];
       }
   }
   reverse(v.begin(),v.end());
   for(auto a:v){
       cout<<a<<' ';
   }
    return 0;
}
