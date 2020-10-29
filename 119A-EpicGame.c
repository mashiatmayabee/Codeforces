#include<stdio.h>
#include<math.h>
int gcd(int p,int q)
{
    int i,gcd;
    for(i=1; i <= p && i <= q; ++i)
    {
        if(p%i==0 && q%i==0)
            gcd = i;
    }
    return gcd;
}
int main()
{
    int a,b,n,count=0;
    scanf("%d %d %d",&a,&b,&n);
    while(n > 0)
    {
        n = n - gcd(a,n);
        if(n < 1)
        {
            printf("0\n");
            break;
        }

        n = n - gcd(b,n);
        if(n < 1)
        if(n < 1)
        {
            printf("1\n");
            break;

        }
    }

    return 0;
}
