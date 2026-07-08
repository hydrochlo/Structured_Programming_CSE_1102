/*
Term Final: 25
4(c)
*/
#include <stdio.h>

int main(){
    int arr[100] = {2,3,4,5};
    int i=0, *p = &arr[8];
    for(i=0; i<=7; i++){
        printf("  %d  ", p[-i]);
    }
    return 0;
}