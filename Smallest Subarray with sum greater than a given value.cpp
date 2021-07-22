#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mi= INT_MAX;
    int i=0,j=0,s=0;
    while(i<=j and j<n){
        while(s<=x and j<n){
            s+=a[j++];
        }
        while(s>x and i<j){
            mi=min(mi,j-i);
            s-=a[i];
            i++;
        }
    }
    cout<<mi<<endl;
    return 0;
}