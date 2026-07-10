/*
QB(14 Page): SetB : 2
*/
#include <stdio.h>

int cntD(int n, int *cnt){
    if(n<=0) return 1;
    if(n%10!=2 && n%10!=3 && n%10!=5 && n%10!=7){
        (*cnt)++;
    }
    return cntD(n/10, cnt);
}

int main(){
    int cnt = 0;

    int n;
    scanf("%d", &n);

    cntD(n, &cnt);

    printf("The number of non-prime digits are: %d\n", cnt);
    return 0;
}