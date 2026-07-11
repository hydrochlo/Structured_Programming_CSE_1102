#include <stdio.h>

void triangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    triangle(n);

    return 0;
}