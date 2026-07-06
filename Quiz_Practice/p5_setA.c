/* Quiz (SET A): question5
You have an integer array containing elements in ascending order.
Write a program to make it sorted in descending order without
using any extra array.
Input: 4 8 9 13 17
Output: 17 13 9 8 4
*/
#include <stdio.h>

int main(){
    int arr[100] = {4, 8, 9, 13, 17};
    // n = how many elements are present in the array
    int n, mid;
    scanf("%d", &n);
    mid = (n%2==0 ? n/2 - 1: n/2);

    for(int i=0; i<=mid; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    } 
    printf("\n");
}