#include<stdio.h>
int main()
{
    int i,limak,bob,year=0;
    scanf("%d %d",&limak,&bob);
    while(limak<=bob)
    {
        limak=limak*3;
        bob=bob*2;
        year++;
    }
    printf("%d\n",year);
    return 0;


}
