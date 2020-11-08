#include<stdio.h>
int main()
{
    int n,i,p,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        if(p==1)
        {
            k=1;
        }
    }
    if(k==0)
    {
        printf("EASY\n");
    }
    else
    {

            printf("HARD\n");
    }
}
