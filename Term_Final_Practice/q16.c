/*
QB: 13 Page (1(a, b))
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