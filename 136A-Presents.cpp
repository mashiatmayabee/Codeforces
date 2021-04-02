#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,k;
    cin>>n;
    int p[n+1],ar[n+1];
    p[0]=0;ar[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
        k=p[i];
        ar[k]=i;
    }
 //   sort(ar,ar+n);
    for(i=1;i<=n;i++)
    {
        k=p[i];
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
