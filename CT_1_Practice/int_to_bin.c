#include <stdio.h>

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
}

int main(){
    int input;
    scanf("%d", &input);
    printBinary(input);
    return 0;
}