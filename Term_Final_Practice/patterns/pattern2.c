#include <stdio.h>

void printPattern(int n){
    for(int i=0; i<n; i++){
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