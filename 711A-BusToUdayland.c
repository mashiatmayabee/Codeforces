#include<stdio.h>

int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    char ch[n][6];
    for(i=0;i<n;i++)
    {
        scanf("%s",&ch[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
            if(ch[i][j]=='O'&&ch[i][j+1]=='O')
            {
                ch[i][j]='+';
                ch[i][j+1]='+';
                c++;
                break;
            }
        }
        if(c>0)
        {
            break;
        }
    }
    if(c>0)
    {
        printf("YES\n");
        for(i=0;i<n;i++)
        {
            printf("%s\n",ch[i]);
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;

}
