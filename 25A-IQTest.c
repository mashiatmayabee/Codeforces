#include<stdio.h>
int main()
{
    int b,n,i,a,even=0,odd=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        {
            even++;
            a=i+1;
        }
        else
        {
            odd++;
            b=i+1;
        }
    }
    if(even<odd)
    {

        printf("%d\n",a);

    }
    else
    {
        printf("%d\n",b);
    }

        return 0;
}
