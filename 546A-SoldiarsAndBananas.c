#include<stdio.h>
int main(){
    int i, k, w, cost=0, final_cost, n;

    scanf("%d %d %d", &k, &n, &w);

    for(i=1; i<=w; i++){
        cost = cost + k* i;
    }

    if(cost > n){
        final_cost = cost - n;
        printf("%d\n", final_cost);
    }

    else printf("0\n");
    return 0;
}
