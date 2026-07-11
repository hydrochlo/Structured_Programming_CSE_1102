#include <stdio.h>

void printPattern(int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printPattern(n);

    return 0;
}