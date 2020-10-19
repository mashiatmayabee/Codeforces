#include<stdio.h>
int main()
{
    int n,i,t=0,min=105,r;
    scanf("%d",&n);
    int a[n],p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&p[i]);
        if(p[i]<min)
        {
            min=p[i];
        }
        t=t+(min*a[i]);
    }



    printf("%d\n",t);
    return 0;

}
