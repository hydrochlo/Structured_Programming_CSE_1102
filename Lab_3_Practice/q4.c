#include <stdio.h>

void recursive(int *p, int current, int *p2, int count, int total){
    if(count == 3){
        printf("\n %d %d %d", p2[0], p2[1], p2[2]);
        return;
    }
    if(current>total) return;
    p2[count] = p[current];
    recursive(p, current+1, p2, count+1, total);
    recursive(p, current+1, p2, count, total);
}

int main(){
    int arr[10] = {1,2,3,4}, arr2[10];
    recursive(arr, 0, arr2, 0, 3);
    return 0;
}