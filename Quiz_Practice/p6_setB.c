/* Quiz (SET B): question6
An integer array contains unique integers. Write a program 
to find the second lowest integer from the array.
Input: 8 4 7 9 1 2
Output: 2
*/
#include <stdio.h>

int main(){
    int n = 6;
    int arr[6] = {100, 200, 300, 400, 500, 600};
    int first_min = arr[0], second_min = 9999999;
    
    for(int i=0; i<n; i++){
        if(arr[i]<first_min) first_min = arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>first_min && arr[i]<second_min) second_min = arr[i];
    }

    printf("%d\n", first_min);
    printf("%d\n", second_min);
    return 0;
}