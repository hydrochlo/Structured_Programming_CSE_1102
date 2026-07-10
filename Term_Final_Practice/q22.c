/*
QB(14 Page): SetB : 1
*/
#include <stdio.h>

int divisors(int i, int n){
    if(i>n){
        return 0;
    }
    if(n%i==0){
        printf("%d ", i);
    }
    return divisors(i+1, n);
}

int main(){
    int n;
    scanf("%d", &n);

    divisors(1, n);
    return 0;
}