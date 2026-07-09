#include <stdio.h>

int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
                    // 0 1 2 3 4 5 6 7 8 9
    int result[10]; // 1 2 3 4 5 6 7 8 9 10

    int i=0, j=0, k=0;

    while(i<5 && j<5){
        if(arr1[i]<arr2[j]){
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while(i<5){
        result[k++] = arr1[i++];
    }
    while(j<5){
        result[k++] = arr1[j++];
    }

    for(int i=0; i<10; i++){
        printf("%d ", result[i]);
    }

    return 0;
}