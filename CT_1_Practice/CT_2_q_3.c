#include <stdio.h>
#include <string.h>

int main(){
    char s1[100] = "I", s2[100] = "live", s3[100] = "in", s4[100] = "bd";
    
    strcpy(s2, s1);
    strcat(s1, s2);
    strcat(s3, s1);
    strcpy(s4, s3);
    printf("%s %s %s %s", s1, s2, s3, s4);
    

    return 0;
}