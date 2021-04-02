#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    string a,b;
    int n,i,suma=0,sumb=0;
    cin>>a>>b;
    n=a.size();
    for(i=0;i<n;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]-'A'+'a';
        }
        if(b[i]>='A'&&b[i]<='Z')
        {
            b[i]=b[i]-'A'+'a';
        }
        suma=suma+(a[i]-'0');
        sumb=sumb+(b[i]-'0');

    }
    if(a<b)
    {
        cout<<"-1";
    }
    else if(a>b)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
//    cout<<suma<<endl<<sumb;
    return 0;
}
