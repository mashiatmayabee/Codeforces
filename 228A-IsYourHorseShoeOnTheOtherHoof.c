#include<stdio.h>

int main()
{
    int ar[4],i,count,j;
    for(i=0;i<4;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0,j!=i;j<4;j++)
        {
            if(ar[i]==ar[j]&&i!=j)
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
}
