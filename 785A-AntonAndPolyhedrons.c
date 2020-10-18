#include<stdio.h>

int main()
{
    int n,i,sum=0;
    scanf(" %d ",&n);
    char st[n][10];

    for(i=0;i<n;i++)
    {
        gets( st[i]);
        if(st[i][0]=='T')
        {
            sum+=4;
        }
        else if(st[i][0]=='C')
        {
            sum+=6;
        }
        else if(st[i][0]=='O')
        {
            sum+=8;
        }
        else if(st[i][0]=='D')
        {
            sum+=12;
        }
       else if(st[i][0]=='I')
        {
            sum+=20;
        }
    }
    printf("%d\n",sum);
    return 0;

}
