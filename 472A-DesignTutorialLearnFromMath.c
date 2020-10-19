#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count1=0,count2=0,a,b,k,l;
    scanf("%d",&n);
    for(i=4;i<=n/2+1;i++)
    {
        j=n-i;
        count2=0;
        count1=0;
        for(k=2;k<=sqrt(i);k++)
        {
            if(i%k==0)
            {
                count1++;
            }
        }
        for(l=2;l<=sqrt(j);l++)
        {
            if(j%l==0)
            {
                count2++;
            }
        }
        if(count1>0&&count2>0)
            {
                    a=i;
                    b=j;
                    break;
            }
        }
    printf("%d %d\n",a,b);
    return 0;
}
 
