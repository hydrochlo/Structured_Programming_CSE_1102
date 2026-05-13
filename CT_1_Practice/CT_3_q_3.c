/*
**** WHAT WILL BE THE OUTPUT OF THIS PROGRAME??? ****
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char s1[100] = "I", s2[100] = "live", s3[100] = "in", s4[100] = "bd";
    
    strcat(s2, s1);
    strcat(s1, s2);
    strcpy(s3, s1);
    strcat(s4, s3);
    
    printf("%s %s %s %s", s1, s2, s3, s4);
    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100] = "I", s2[100] = "live", s3[100] = "in", s4[100] = "bd";
    
    strcat(s2, s1);
    strcat(s1, s2);
    strcpy(s3, s1);
    strcat(s4, s3);
    
    printf("%s %s %s %s", s1, s2, s3, s4);
    return 0;
}
//  IliveI  liveI  IliveI  bdIliveI