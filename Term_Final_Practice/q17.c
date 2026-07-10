/*
QB: 13 Page SET B : 3
*/
#include <stdio.h>

int main(){
    int i, j;
    for(i=0; i<=10; i++){
        i = (i+1)%6; // i = 3
        for(j=1; j<=i; j++) printf(" %d ", (i+j)%5); // 
        printf("\n");
    }
    return 0;
}
/* Output: 2
           4 0 1
           1 2 3 4 0
           2
           4 0 1
           1 2 3 4 0
*/