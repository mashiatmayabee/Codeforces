#include<stdio.h>
int main()
{
    int n,i,count=1,max=1;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(ar[i]<=ar[i+1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }

        else
        {
            count=1;
        }
    }
    printf("%d\n",max);
    return 0;

}
