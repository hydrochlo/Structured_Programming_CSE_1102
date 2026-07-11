#include <stdio.h>

void triangle(int n){
    int flag = 1;

    for(int i=0; i<n; i++){
        if(i%2==0) flag = 1;
        else flag = 0;
        for(int j=0; j<=i; j++){
            printf("%d", flag);
            flag = 1 - flag;
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