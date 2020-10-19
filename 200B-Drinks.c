#include<stdio.h>

int main()
{
    double ans,n1,sum1;

    int n,sum=0,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    sum1=sum*1.0;
    ans=sum1/n;
    printf("%0.12lf\n",ans);
    return 0;

}
