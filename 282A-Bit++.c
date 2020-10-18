#include<stdio.h>
int main()
{
    int x=0,n,i;
    scanf("%d",&n);
    char op[n][5];
    for(i=0;i<n;i++)
    {
        scanf("%s",&op[i]);
        if(op[i][1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    printf("%d\n",x);
    return 0;

}
