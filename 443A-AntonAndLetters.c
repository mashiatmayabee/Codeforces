#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,n,a=0,count=0;
    char ch[1010];
    gets(ch);
    n=strlen(ch);
    char ar[n/2];
    for(i=0;i<n;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            ar[a]=ch[i];
            a++;
        }
    }
    for(i=0;i<a;i++)
    {
            for(j=i;j<a;j++)
            {
                if(ar[i]>ar[j])
                {
                    char temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
    }
    for(i=0;i<a;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
