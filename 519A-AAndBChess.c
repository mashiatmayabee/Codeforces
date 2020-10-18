#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,black=0,white=0;
    char a[8][8];

    for(i=0;i<8;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(a[i][j]=='Q')
            {
                white=white+9;
            }
            else if(a[i][j]=='R')
            {
                white+=5;
            }
            else if(a[i][j]=='B'||a[i][j]=='N')
            {
                white+=3;
            }
            else if(a[i][j]=='P')
            {
                white+=1;
            }
            if(a[i][j]=='q')
            {
                black+=9;
            }
            else if(a[i][j]=='r')
            {
                black+=5;
            }
            else if(a[i][j]=='b'||a[i][j]=='n')
            {
                black+=3;
            }
            else if(a[i][j]=='p')
            {
                black+=1;
            }
        }
    }
 //   printf("%d %d",black,white);

    if(black>white)
        {
            printf("Black\n");
        }
        else if(white>black)
        {
            printf("White\n");
        }
        else
        {
            printf("Draw\n");
        }
        return 0;

}
