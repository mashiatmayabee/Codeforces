#include<stdio.h>
int main()
{
    int m,n,k;
    scanf("%d%d",&m,&n);
    if(m>1&&n>1){
    k=(m+n)/2;
    if(k%2==1)
    {
        printf("Akshat\n");
    }
    else
    {
        printf("Malvika\n");
    }
    }
    else{
        printf("Akshat\n");
    }
    return 0;
}
