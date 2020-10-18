#include<stdio.h>
int main()
{
    int m[12],k,i,j,l,sum=0,t=0;
    scanf("%d",&k);

    for(i=0;i<12;i++)
    {
        scanf("%d",&m[i]);
        t+=m[i];
    }
    for(i=0;i<12;i++)
    {
        for(j=i;j<12;j++)
        {
            if(m[i]<m[j])
            {
                int temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
        }
    }
    for(i=0;i<12;i++)
    {
        sum=sum+m[i];
        if(k==0)
        {
            printf("0\n");
            break;
        }
        else if(k>t)
        {
            printf("-1\n");
            break;
        }
        else if(sum>=k)
        {
            printf("%d\n",i+1);
            break;
        }
    }


}
