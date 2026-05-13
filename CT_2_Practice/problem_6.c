/*
Question: Write a program to reverse 
the elements of an array in-place. 
You cannot use a second array 
to hold the reversed values.
*/
#include <stdio.h>

#define MAX_SIZE 100000
#define endl "\n"

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[MAX_SIZE];

    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<(n/2); i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("The reversed array : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}