#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l= 0;
    int r= n-1;
    cin>>a>>b;
    for(int i=0;i<=r;i++){
        if(a[i]<a){
            swap(a[i],a[l]);
            l++;
        }
        else if(a[i]>b)
        {
            swap(a[i];a[r]);
            r--;
            i--;
        }
    }

    return 0;
}