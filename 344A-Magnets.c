#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    char ar[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%s",ar[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(ar[i+1][0]==ar[i][1])
        {
            count++;
        }
    }
    printf("%d\n",count+1);

}
