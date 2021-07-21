#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int n;
        int c=0;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int x=k-a[i];
            if(m[x]==0)
            {
                m[a[i]]++;
            }
            else{
                c+=m[x];
                m[a[i]]++;
            }
        }
        cout<<c;
        

    return 0;
}