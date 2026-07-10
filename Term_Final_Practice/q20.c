/*

*/
#include <stdio.h>

int isDigitPrime(int n){
    if(n<=0) return 1;

    // Use this one
    if(n%10!=2 && n%10 !=3 && n%10!=5 && n%10!=7){
        return 0;
    }
    // Or use this one, both work the same
    // if(!(n%10==2 || n%10==3 || n%10==5 || n%10==7)) {
    //     return 0;
    // }
    return isDigitPrime(n/10);
}

int main(){
    int n;
    scanf("%d", &n);

    if(isDigitPrime(n)==1) printf("YES\n");
    else printf("NO\n");
}