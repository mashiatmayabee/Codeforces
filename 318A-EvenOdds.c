#include<stdio.h>
int main()
{
    long long int n,k,i;
    scanf("%I64d %I64d",&n,&k);
    if(k<=((n/2)+(n%2)))
       {
           i=(k-1)*2+1;
       }
       else
        {
            i=(k-((n/2)+(n%2)))*2;
        }
    printf("%I64d\n",i);
    return 0;

}
