#include<stdio.h>
int main(){
    int x,x1,x2,x3,x4,x5,a,b,c;
    scanf("%d",&x);
    x1=x/5;
    a=x-(x1*5);
    x2=a/4;
    b=a-(x2*4);
    x3=b/3;
    c=b-(x3*3);
    x4=c/2;
    x5=c-(x4*2);
    printf("%d",x1+x2+x3+x4+x5);
    return 0;


}
