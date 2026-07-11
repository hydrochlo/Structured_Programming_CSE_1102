#include <stdio.h>

void pattern(int n){
    for(int i=0; i<n; i++){
        int space = n-1-i;
        char ch1 = 'A';
        for(int j=0; j<space; j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("%c", ch1++);
        }
        ch1--; ch1--;
        for(int j=0; j<=(i-1); j++){
            printf("%c", ch1--);
        }
        for(int j=0; j<space; j++){
            printf(" ");
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