#include<stdio.h>
int main()
{
    int i,n,one=0,zero=0;
    scanf("%d ",&n);
    char c[n];
    scanf(" %s",&c);
    for(i=0;i<n;i++)
    {
        if(c[i]=='0')
        {
            zero++;
        }
        else if(c[i]=='1')
        {
            one++;
        }
    }
    if(zero>one)
        printf("%d",zero-one);
    else
        printf("%d",one-zero);
    return 0;

}
