#include <stdio.h>

void pattern(int n){
    int spaces = 0;

    for(int i=0; i<n; i++){
        // stars
        for(int j=1; j<=n-i; j++){
            printf("*");
        }

        // space
        for(int j=0; j<spaces; j++){
            printf(" ");
        }

        // stars
        for(int j=1; j<=n-i; j++){
            printf("*");
        }
        spaces += 2;
        printf("\n");
    }
    spaces -= 2;
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            printf("*");
        }

        // space
        for(int j=0; j<spaces; j++){
            printf(" ");
        }

        // stars
        for(int j=1; j<=i; j++){
            printf("*");
        }
        spaces -= 2;
        printf("\n");
    }
}

int main(){

    int n;
    scanf("%d", &n);

    pattern(n);
    return 0;
}