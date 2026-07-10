/*
QB (17 page): Quiz: SetA: 1
*/
#include <stdio.h>
#include <string.h>

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    int g;
    g = gcd(n1, n2);

    printf("GCD of %d, %d is = %d\n", n1, n2, g);
    return 0;
}