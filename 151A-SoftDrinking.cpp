#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>v;
    int n,k,l,c,d,p,nl,np,td,tl,nd,ns,ml,ms,mli;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    td=k*l;
    tl=c*d;
    nd=n*nl;
    ns=n*np;
    v.push_back(td/nd);
    v.push_back(p/ns);
    v.push_back(tl/n);
    cout<<*min_element(v.begin(),v.end());
    return 0;
}
