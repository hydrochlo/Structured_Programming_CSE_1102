#include <stdio.h>

void pattern(int n){
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
}

int main(){

    int n;
    scanf("%d", &n);

    pattern(n);
    return 0;
}