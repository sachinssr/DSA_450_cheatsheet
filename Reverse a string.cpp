#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        int size=s.length();
        int start=0,end= size-1;
        while(start<end)
        {
            swap(s[start],
            s[end]);
            start++;
            end--;
        }
        cout<<s<<"\n";

    }
    return 0;
}