#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            map[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            map[a[i]]++;
        }
        cout<<map.size()<<endl;
        

    return 0;
}
