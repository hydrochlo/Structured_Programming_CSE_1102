/* Quiz (SET A): question6
An integer array contains unique integers. Write a program 
to find the second highest integer from the array.
Input: 8 4 7 9 1 2
Output: 8
*/
#include <stdio.h>

int main(){
    int n = 6;
    int arr[6] = {100, 200, 300, 400, 500, 600};
    int first_max = arr[0], second_max = arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i]>first_max) first_max = arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]<first_max && arr[i]>second_max) second_max = arr[i];
    }

    printf("%d\n", first_max);
    printf("%d\n", second_max);
    return 0;
}