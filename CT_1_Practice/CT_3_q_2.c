/*
You will be given two strings as input. 
Each of these strings represents an integer 
number. You have to determine which one is the larger 
integer. For example, if the two input strings are 
"125478965478999999999874587" and 
"125478965478999999999874586" respectively, 
the first integer is larger than the second.
You must not use the built-in functions 
strcmp() and strncmp().
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1>len2){
        printf("The first string is larger\n");
    } else if(len2>len1){
        printf("The second string is larger\n");
    } else {
        for(int i=1; i<len1+1; i++){
            int lst_d1 = str1[len1-i] - '0';
            int lst_d2 = str2[len2-i] - '0';
            if(lst_d1>lst_d2){
                printf("The first string is larger\n");
                return 0;
            }
        }
        printf("The second string is larger\n");
    }

}