/*
QB (15 page): lab Test: SetA: 3
*/
#include <stdio.h>
#include <string.h>

void mycat(char *a, char *b, char *c){
    int i=0, j=0, k=0;

    int len1 = strlen(a), len2 = strlen(b);
    while(i<len1){
        c[k++] = a[i++];
    }

    while(j<len2){
        c[k++] = b[j++];
    }
    c[k] = '\0';

}

int main(){
    char str1[100] = "Hel", str2[100] = "lo", str3[100];
    mycat(str1, str2, str3);

    printf("%s\n", str3);
    return 0;
}