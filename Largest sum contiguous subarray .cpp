#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int pre[n+1];
        pre[0]=0;
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        
        int max= INT_MIN;
        
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                int s=pre[j]-pre[i-1];
                if(s>max){
                    max=s;
                }
            }
            
        }
        cout<<max;

    return 0;
}
