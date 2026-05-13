#include <stdio.h>
#define abc x*(x+x);

int main(){
    float f1 = 3.7, f2 = 8.6, f3 = 6.8, f4 = 2.0, f5 = 0;
    int x = 5, y = 6, z = 7, a = 8, b = 9, c = 10;

    f5 = (int)(f1-f2) + a/(int)f2 + b/f4 + (y/x) * (c+f3);
    // f5 = (int)(f1-f2) + a/(int)f2 + b/f4 + (y/x) * (c-f3);

    printf("%f", f5);

}