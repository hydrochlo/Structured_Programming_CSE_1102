// Term Final: 25
// 2(C)
#include <stdio.h>

int main(){ 
    int a=10, b=20, c=0, d=5;
    a++;
    c = ++a + b-- + (d++)/3;

    printf("%d %d %d %d", a, b, c, d);
    // Output: 12 19 

    return 0;
}