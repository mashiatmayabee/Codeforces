#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else
            {
                if(i%2==0&&j==c&&i%4!=0)
                {
                    printf("#");
                }
                else if(i%4==0&&j==1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }


            }
        }

            printf("\n");
    }
}
