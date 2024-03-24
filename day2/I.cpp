#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &a,int n)
{
    map<int,int> freq;
    for(int i=0; i<n; i++)
    {
        freq[a[i]]++;
    }   
    int cnt=0;
    for(auto i: freq)
    {
        cnt+=(i.second-1);
    }
    int ans=n-cnt;
    if(cnt%2==1)
    {
        ans--;
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
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        solve(a,n);
    }
}