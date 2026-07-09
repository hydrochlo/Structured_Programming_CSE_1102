#include <stdio.h>

int main(){ 

    int n = 112206378;
    
    int count[10] = {0};
    
    while(n>0){
        int x = n%10; // 1 -> x=7
        // printf("%d\n", x);
        count[x]++; // count[7] = 1;
        n = n/10; // 0
    }

    int counttt = 0;

    for(int i=0; i<10; i++){
        if(count[i]>0){
            counttt++;
            printf("%d appears %d times\n", i, count[i]);
        }
    }

    printf("%d", counttt);

    return 0;
}