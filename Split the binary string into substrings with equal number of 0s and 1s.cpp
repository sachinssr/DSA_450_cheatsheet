#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int Substring(string s)
{
    int n=s.length();
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        x++;
        else y++;
        if(x==y)
        c++;
    }
    if(x!=y)
    return -1;

    return c;
}
int main()
{
    string s;
    cin>>s;
    cout<<Substring(s);
    return 0;
}
