#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int l,m,n;
        cin>>l>>m>>n;
        int a[l],b[m],c[n];
        for(int i=0;i<l;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];
        vector<int> v;
        int i=0,j=0,k=0;
        while(i<l and j<m and k<n){
            if(a[i]==b[j] and b[j]==c[k]){
                v.push_back(a[i]);
                i++;j++;k++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else if (b[j]<c[k]) j++;
            else k++;
            int xx=a[i-1];
            while(a[i]==xx)i++;
            int yy=b[j-1];
            while(b[j]==yy) j++;
            int zz=c[k-1];
            while(c[k]==zz) k++;
        }
        if(v.size()==0) {
            cout<<"-1";
        }
        else{
            for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        }
    return 0;
}