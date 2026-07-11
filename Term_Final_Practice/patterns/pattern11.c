#include <stdio.h>

void pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d", j+1);
        }
        for(int j=0; j<(2*n - (i+1)*2); j++){
            printf(" ");
        }
        for(int j=i; j>=0; j--){
            printf("%d", j+1);
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