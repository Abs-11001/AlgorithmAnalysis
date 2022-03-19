#include <stdio.h>
#include <math.h>
int prime[1000000];
int main(){
    int x;
    int i;
    int j;
    double n;
    scanf("%lf",&n);
    for(i = 0;i <= n;i ++){
        prime[i] = 1;
    }

    for(i = 2;i * i <= n;i ++) {
        if (prime[i] == 0) continue;
        for (j = i; i * j <= n; j++) {
            prime[i * j] = 0;
        }
    }
    for(i = 2;i <= n;i++){
        if(prime[i] == 1)
            printf("%8d",i);
    }
    return 0;
}