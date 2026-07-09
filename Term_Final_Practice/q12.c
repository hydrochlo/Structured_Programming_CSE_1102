/*

*/
#include <stdio.h>

int main(){
    int arr[5] = {2,4,6,8,10};
    int *p = arr;
    printf("%d\n", *(p+2));
    printf("%d\n", *++p);
    printf("%d\n", *(arr + 4));

    return 0;
}