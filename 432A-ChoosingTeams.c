#include<stdio.h>
int main()
{
    int n,k,i,count=0,s;
    scanf("%d %d",&n,&k);
    s=5-k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<=s)

        {
            count++;
        }
    }
    printf("%d",count/3);
    return 0;


}
