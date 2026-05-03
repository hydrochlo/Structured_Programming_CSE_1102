#include <stdio.h>
#define MAX_SIZE 100
#define MAX_SZ 200

int main() {
    int n, m;
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int result[MAX_SZ];

    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }
    
    int p=0, q=0, i=0;
    while(p<n && q<m){
        if(arr1[p]<arr2[q]){
            result[i] = arr1[p];
            p++;
        } else {
            result[i] = arr2[q];
            q++;
        }
        i++;
    }

    while (p < n) {
        result[i] = arr1[p];
        i++;
        p++;
    }

    while (q < m) {
        result[i] = arr2[q];
        i++;
        q++;
    }

    printf("Merged array: ");
    for (int j = 0; j < (n+m); j++) {
        printf("%d ", result[j]);
    }
    printf("\n");

    return 0;
}