#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2) cout<<"No";
    else{
        string temp=s1+s2;
        if(temp.find(s2)!=string::npos){
            cout<<"yes";
        }
        else cout<<"no";
    }
    return 0;
}
