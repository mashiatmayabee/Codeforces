#include<stdio.h>

int main()
{
    int n,i,suma1=0,suma2=0,suma3=0;
    scanf("%d",&n);
    int a1[n],a2[n-1],a3[n-2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
        suma1+=a1[i];
    }
    for(i=0;i<(n-1);i++)
    {
        scanf("%d",&a2[i]);
        suma2+=a2[i];
    }
    for(i=0;i<(n-2);i++)
    {
        scanf("%d",&a3[i]);
        suma3+=a3[i];

    }
    printf("%d\n%d\n",suma1-suma2,suma2-suma3);
    return 0;
}
