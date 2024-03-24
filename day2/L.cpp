#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& a,int n)
{
    map<int,int> freq;
    for(int i=0; i<n; i++)
    {
        freq[a[i]]++;
    }
    int mx_freq=0;

    for(auto v:freq)
    {
        mx_freq=max(mx_freq,v.second);
    }
    int ans=0;
    while(mx_freq < n)
    {
        int rem=n-mx_freq;
        int can_add=mx_freq;
        ans++;
        ans+=min(can_add,rem);
        mx_freq+=min(can_add,rem);
    }
    cout<<ans<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        solve(a,n);
    }
}