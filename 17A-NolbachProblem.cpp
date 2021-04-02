#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int v[1010];
vector<int>m;

void preprocess(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        v[i]=1;
    }
    for(i=2; i<=n;i++)
    {

        for(j=2;i*j<=n;j++)
        {
            v[i*j]=0;
        }
    }
}
int main(){
    int n,i,j,x;
    cin>>n>>x;
    preprocess(n);
    for(i=2;i<=n;i++)
    {
        if(v[i]==1)
            m.push_back(i);
    }
    int p=0;
    for(i=m.size();i>=0;i--)
    {
        int c=0;
        for(j=i-1;j>=0;j--)
        {
            if(m[j]+m[j+1]+1==m[i]||m[j]+m[j-1]+1==m[i])
            {
                //cout<<"Gotchaaa";
                c++;
            }

        }
        if(c>0)
        {
            p++;
        }

    }
    if(p>=x)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;

}
