/*
Let us assume that you have a 100 x 100  2 DM 
array of integers. Analyze each of the columns 
of the array and find those columns where a 
particular element in the column is equal to 
the summation of the other elements of that 
column. Print the column numbers of such columns.
*/
#include <stdio.h>
int main(){

    int arr[100][100] = {
        {5, 8, 20, 4, 7, 1, 6, 18, 9, 3},
        {2, 1, 2, 5, 3, 1, 4, 2, 1, 4},
        {3, 4, 2, 1, 9, 1, 2, 2, 5, 7},
        {1, 2, 2, 8, 4, 10, 8, 2, 3, 1},
        {4, 6, 2, 3, 2, 1, 5, 2, 2, 8},
        {2, 3, 2, 7, 1, 1, 3, 2, 6, 2},
        {1, 9, 2, 2, 5, 1, 7, 2, 4, 5},
        {3, 2, 2, 4, 8, 1, 2, 2, 1, 9},
        {4, 1, 2, 6, 3, 2, 1, 2, 7, 4},
        {2, 5, 4, 9, 6, 1, 9, 2, 8, 6},
    };

    int n, m;

    printf("Enter the number of row and columns of the array: ");
    scanf("%d%d", &n, &m);

    for(int j=0; j<m; j++){
        int colSum = 0;
        
        for(int i=0; i<n; i++){
            colSum += arr[i][j];
        }

        for(int i=0; i<n; i++){
            if(arr[i][j]*2 == colSum){
                printf("%d ", j);
                break;
            }
        }

    }
    return 0;
}