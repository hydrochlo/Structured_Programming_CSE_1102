#include <stdio.h>

int main(){
    int arr[10] = {5, 7, 8, 6, 7, 8, 2, 9, 4, 2};
                // 5, 7, -, 6, 7, 8, 2, 9, 4, 2
                // -, 5, 7, 6, 7, 8, 2, 9, 4, 2
                // 8, 5, 7, 6, 7, 8, 2, 9, 4, 2

    for(int i=0; i<10 ; i++){
        if(arr[i]%2 == 0){
            int temp = arr[i];
            for(int j=i; j>0; j--){
                arr[j] = arr[j-1];
            }
            arr[0] = temp;
        }
    }

    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }   

    return 0;
}