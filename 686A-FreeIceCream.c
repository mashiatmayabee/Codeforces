#include<stdio.h>
int main()
{
    int n,x,i,count=0,c;
    char sign;
    scanf("%d %d ",&n,&x);
    for(i=0;i<n;i++)
    {
        gets( sign );
        scanf(" %d",&c);
        if(sign=='+')
        {
            x=x+c;
        }
        else if(sign=='-')
        {
            if(x<c)
            {
                count++;
            }
            else
            {
                x=x-c;
            }
        }
    }
    printf("%d %d\n",x,count);
    return 0;
}
