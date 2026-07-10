#include <stdio.h>

int main(){
    int a = 20, b = 10, c = 15;
    int d = (a*2 + b/a + c/4)/11.0 + 2.9;
    printf("%d\n", d);

    return 0;
}