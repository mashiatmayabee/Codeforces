#include<stdio.h>
int main(){
    char p[100],n,i,count=0;
    gets(p);
    n=strlen(p);
    for(i=0;i<n;i++)
    if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
    {
        count=count+1;
    }

    if(count!=0){

        printf("YES\n");
    }

    else{
        printf("NO\n");

    }
    return 0;
}
