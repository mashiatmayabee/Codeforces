#include<stdio.h>
int main()
{
    int a,b,c,ar[5],max,i;
    scanf("%d%d%d",&a,&b,&c);
    ar[0]=a+b*c;
    ar[1]=a*(b+c);
    ar[2]=a*b*c;
    ar[3]=(a+b)*c;
    ar[4]=a+b+c;
    max=ar[0];
    for(i=1;i<5;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    printf("%d\n",max);
    return 0;

}

