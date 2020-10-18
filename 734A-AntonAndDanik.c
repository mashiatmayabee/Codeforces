#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,ant=0,dan=0;
    scanf("%d ",&n);
    char g[n];
    scanf("%s",&g);
    for(i=0;i<n;i++)
    {
        if(g[i]=='A')
        {
            ant++;
        }
        else
        {
            dan++;
        }
    }
    if(ant>dan)
    {
        printf("Anton\n");
    }
    else if(dan>ant)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;

}

