#include <stdio.h>

int main(){
    float a, b, c, d;

    scanf("%f%f%f%f", &a, &b, &c, &d);

    float res_f = (a+b+c+d) / 4;
    // printf("%f\n", res_f);
    int res_i = res_f;
    // printf("%d\n", res_i);
    
    if(res_i==res_f){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}