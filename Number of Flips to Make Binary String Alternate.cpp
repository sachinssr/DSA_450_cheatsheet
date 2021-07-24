#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans1 = 0, ans2 = 0;


    for (int i = 0;i < s.size();i++) {
        
        if (i % 2 == 0 && s[i] != '1' || i % 2 && s[i] != '0') ans1++;
        
        if (i % 2 == 0 && s[i] != '0' || i % 2 && s[i] != '1') ans2++;
    }
    cout<<min(ans1, ans2);
    return 0;
}