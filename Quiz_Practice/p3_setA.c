#include <stdio.h>

int sumrecursive(int n){
    if(n==101) return 0;
    if(n%10 >= 4) {
        return n%10 + sumrecursive(n+1);
    }
    return sumrecursive(n+1)-1;
}

int main(){
    int n = sumrecursive(0);
    printf("%d ", n);
    return 0;
}