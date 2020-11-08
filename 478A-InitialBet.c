#include<stdio.h>
int main()
{
    int ar[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    if(sum%5==0&&sum!=0)
    {
        printf("%d\n",sum/5);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
