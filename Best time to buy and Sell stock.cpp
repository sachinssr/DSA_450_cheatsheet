#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int n;
        cin>>n;
        int prices[n];
        for(int i=0;i<n;i++) cin>>prices[i];
        int curr_price = INT_MAX;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            if (prices[i]<curr_price)
            curr_price=prices[i];
            else if(prices[i]-curr_price>profit)
            profit=prices[i]-curr_price; 
        }
        cout<<profit<<endl;

    return 0;
}
