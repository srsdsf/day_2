#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int open=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
        {
            open++;
        }
        else
        {
            open--;
        }
        if(open<0)
        {
            ans++;
            open=0;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}