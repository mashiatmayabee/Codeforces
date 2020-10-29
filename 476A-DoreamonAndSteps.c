#include<stdio.h>
int  main()
{
    int n,m,steps=0,count=0;
    scanf("%d %d",&n,&m);
    steps=(n/2)+(n%2);
    if(n<m)
        {
            printf("-1\n");
        }
    while(n>=m)
    {

        if(steps%m==0)
        {
            printf("%d\n",steps);
            break;
        }
        else if(steps%m!=0&&steps<=n)
        {
            steps=steps+1;
        }

    }
    return 0;

}
