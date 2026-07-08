/*
Term Final: 25
3(C)
*/
#include <stdio.h>

int main(){
    for(int i=5; i<15; i+=2){
        i = (i+2)%10 + 1;
        for(int j=1; j<=(i+5); j+=3){
            printf("  %d  ", j);
        }
        printf("\n");
    }
    return 0;
}