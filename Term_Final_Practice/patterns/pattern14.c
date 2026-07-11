#include <stdio.h>

void pattern(int n){
    for(int i=n-1; i>=0; i--){
        char ch = 'A';
        for(int j=0; j<=i; j++){
            printf("%c ", ch++);
        }
        printf("\n");
    }
}

int main(){

    int n;
    scanf("%d", &n);

    pattern(n);
    return 0;
}