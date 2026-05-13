#include <stdio.h>

int main(){
    int a=10;
    int *p = &a;

    printf("%p\n", &p);
    printf("%p", p);


    return 0;
}