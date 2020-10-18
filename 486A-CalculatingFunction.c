#include<stdio.h>
int main()
{
    long long int sum, n;
    scanf("%lld",&n);

    if(n%2==0)
        {
            sum=n/2;
        }
    else
        {
            sum=-((n/2)+1);
        }

    printf("%lld\n",sum);
    return 0;
}
