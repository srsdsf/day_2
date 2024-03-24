#include<bits/stdc++.h>
using namespace std;
void res(int n,int m,vector<string> &v)
{
    int minimum=INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                int cnt=0;
                string s1=v[i];
                string s2=v[j];
                for(int k=0; k<m; k++)
                {
                    cnt+=(abs((s1[k]-'a')-(s2[k]-'a')));
                }
                minimum=min(cnt,minimum);
            }
        }
    }
    cout<<minimum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        res(n,m,v);
    }
}