#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Solution
{
    public:
    bool ispar(string x)
    {
        stack<char> s;
    char a;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='('|| x[i]=='{'||x[i]=='[')
        {
            s.push(x[i]);
            continue;
        }
        if(s.empty())
        return false;
        switch(x[i]){
            case ')':
               a=s.top();
               s.pop();
               if(a=='{'|| a=='[')
               return false;
               break;

            case '}':
               a=s.top();
               s.pop();
               if(a=='('|| a=='[')
               return false;
               break;

            case ']':
               a=s.top();
               s.pop();
               if(a=='{'|| a=='(')
               return false;
               break;
        }
        return(s.empty());
    }
        
    }
};
int main()
{
    string a;
    cin>>a;
    Solution obj;
    if(obj.ispar(a))
    cout<<"balanced"<<endl;
    else 
    cout<<"not balanced"<<endl;
    return 0;
}
