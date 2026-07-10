/*
QB (14 Page) SetA: question 1
*/

#include <stdio.h>

int recSum(int n){
    if(n==0) return 0;
    return n*(n+1) + recSum(n-1);
}

int main(){
    int n;
    scanf("%d", &n);

    int result = recSum(n);
    printf("%d \n", result);
    return 0;
}