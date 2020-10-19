#include<stdio.h>
int main()
{
    int a,b,c,ans=0;
    scanf("%d %d %d",&a,&b,&c);
    while(1)
    {
         if(((a*2)<=b)&&((a*4)<=c))
        {
            ans=7*a;
            break;
        }
        else
        {
            a--;
        }

    }

    printf("%d\n",ans);
    return 0;


}
