     #include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { printf("I ");
        if(i%2==0)
        {
            printf("love ");
        }
        else
        {
            printf("hate ");
        }
        if(i!=n)
        {
            printf("that ");
        }
    }
    printf("it\n");

    return 0;
}
