#include<stdio.h>
#include<string.h>
int main()
{
    char n[110];
    int i,count=0,m;
    gets(n);
    m=strlen(n);
    for(i=0;i<m;i++)
    {
        if(n[i]==n[i+1])
        {
            count=count+1;
            if(count>=6)
            {
                printf("YES\n");
                break;
            }
        }
        else
        {
            count=0;
        }
    }
    if(count<6)
    {
        printf("NO\n");
    }
    return 0;

}
