#include<stdio.h>
int main()
{
    int k,r,t,i=1;
    scanf("%d %d",&k,&r);
    while(1)
    {
        t=(k*i);
        if(t%10==0||(t-r)%10==0)
        {
            break;
        }
        i++;
    }
    printf("%d",i);
    return 0;

}
