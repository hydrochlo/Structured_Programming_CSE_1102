#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "a6b9c3"; // aaaaaabbbbbbbbbccc
    char str2[100] = "a9t9"; 

    int len1 = strlen(str1);
    // printf("%d \n", len1);
    int len2 = strlen(str2);

    int count_1 = 0, count_2 = 0;
    for(int i=0; i<len1; i++){
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u'){
            int x = str1[i+1] - '0';
            count_1 += x;
        }
        i++;
    }

    for(int i=0; i<len2; i++){
        if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u'){
            int x = str2[i+1] - '0';
            count_2 += x;
        }
        i++;
    }

    printf("The are %d vowles in string 1\n", count_1);
    printf("The are %d vowles in string 2\n", count_2);

    return 0;
}