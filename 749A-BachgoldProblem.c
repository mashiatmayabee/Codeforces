#include<stdio.h>
int main()
{
    int n,i,k,p;
    scanf("%d",&n);
    k=n/2;
    printf("%d\n",k);

    if(n%2==0)
    {
        for(i=0;i<k;i++)
        {
            printf("2 ");
        }
    }
    else
    {
        for(i=0;i<k-1;i++)
        {
            printf("2 ");
        }
        printf("3");
    }

}
