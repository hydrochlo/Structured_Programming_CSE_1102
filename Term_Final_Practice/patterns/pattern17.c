#include <stdio.h>

void pattern(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'E'-i; ch<='E'; ch++){
            printf("%c ", ch);
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