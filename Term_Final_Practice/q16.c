/*
QB: 13 Page SET A : 3
*/
#include <stdio.h>

int main(){

    int i, j;
    for(i=0; i<=10; i++){
        i = (i+1)%5;
        for(j=1; j<=i; j++) {printf(" %d ", (i+j));}
        printf("\n");
    }
    return 0;
}
/*
Output:

*/