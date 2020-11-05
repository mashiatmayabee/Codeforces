#include<stdio.h>
int main()
{
    int n,i,s=0,j,temp,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    for(i=0;i<n;i++)
    {
        s=s+(max-a[i]);
    }
    printf("%d\n",s);
    return 0;
}
