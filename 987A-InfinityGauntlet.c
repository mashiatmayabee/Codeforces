#include<stdio.h>
int main()
{
    int i=0,j,n;
    char color[6];
    color[0]='p';
    color[1]='g';
    color[2]='b';
    color[3]='o';
    color[4]='r';
    color[5]='y';

    scanf("%d",&n);
    char c[n][10];
    for(i=0;i<n;i++)
    {
        scanf("%s",&c[i]);
    }
    printf("%d\n",6-n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
            if(c[i][0]==color[j])
            {
                color[j]='0';
            }
        }
    }
    for(i=0;i<6;i++)
    {
        if(color[i]=='p')
        {
            printf("Power\n");
        }
        else if(color[i]=='g')
        {
            printf("Time\n");
        }
        else if(color[i]=='b')
        {
            printf("Space\n");
        }
        else if(color[i]=='o')
        {
            printf("Soul\n");
        }
        else if(color[i]=='r')
        {
            printf("Reality\n");
        }
        else if(color[i]=='y')
        {
            printf("Mind\n");
        }
    }
    return 0;
}
