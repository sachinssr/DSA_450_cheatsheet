#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int s=0,f=0;
    unordered_map<int,int> m;
    for(int i=0;i<n-1;i++){
        s=s+a[i];
        if(s==0 or m[s] or a[i]==0){
            f=1;
            break;
        }
        else{
            m[s]=1;
        }
    }
    if(f==1) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
