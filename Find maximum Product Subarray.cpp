#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
long long ma=a[0],mi=a[0],prod=a[0];

for(int i=0;i<n;i++){
    if(a[i]<0)
    swap(mi,ma);
    ma= max ((long long)a[i],ma*a[i]);
    mi= min ((long long)a[i],mi*a[i]);
    if(ma>prod)
    prod=ma;
}
cout<<prod<<" ";
return 0;
}