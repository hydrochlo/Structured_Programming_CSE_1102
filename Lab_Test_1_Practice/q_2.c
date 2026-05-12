/*
Assume that you have two single dimensional arrays, 
A and B, of integers each containing 100 elements. 
Determine how many elements from A can be obtained 
by adding any two different elements from 
array B. Print the count. (30)
*/
#include <stdio.h>

int main(){
    int A[10] = {5, 12, 18, 20, 25, 30, 42, 55, 60,  7};
    int B[10] = {2,  3, 10, 15,  8, 20,  1,  4, 30, 50};

    int count = 0;

    for(int i=0; i<10; i++){
        int found = 0;

        for(int j=0; j<10; j++){
            for(int k=j+1; k<10; k++){
                int sum = B[j]+ B[k];
                if(A[i] == sum){
                    printf("%d ", A[i]);
                    count++;
                    found = 1; // Mark as found
                    break;
                }
            } if(found) break;
        }
        
    }

    printf("\nTotal Count: %d\n", count);

    return 0;
}