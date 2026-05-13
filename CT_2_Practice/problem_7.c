/*
Question: Given an array of size 100 that 
currently contains 50 numbers, write a 
program to insert a new integer at a specific
index provided by the user, shifting all
subsequent elements to the right.
*/
#include <stdio.h>

#define MAX_SIZE 100000

int main(){
    int n, index, el;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[MAX_SIZE];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the index no. of the element you want to put: ");
    scanf("%d", &index);

    printf("Enter the new element you want to add into the array: ");
    scanf("%d", &el);

    for(int i=n; i>index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = el; n++;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}