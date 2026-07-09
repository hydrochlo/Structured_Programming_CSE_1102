/*

*/
#include <stdio.h>


int main(){

    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int a = 20;

    int i = 0;
    while (i < n && arr[i] < a) {
        i++;
    }

    for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    arr[i] = a;
    n++;

    for(int k = 0; k < n; k++){
        printf(" %d ", arr[k]);
    }
    
    return 0;
}