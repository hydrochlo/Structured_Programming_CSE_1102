/*
QB (15 page): lab Test: SetB: 1
*/
#include <stdio.h>
#include <string.h>

int mycomp(char *a, char *b){
    int len1 = strlen(a), len2 = strlen(b);
    if(len1!=len2) return 0;

    for(int i=0; i<len1; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }

    return 1;
}

int main(){
    char str1[100] = "Bangladesha", str2[100] = "Bangledesha";

    if(mycomp(str1, str2)){
        printf("They are equal.\n");
    } else {
        printf("They are not equal.\n");
    }

    return 0;
}