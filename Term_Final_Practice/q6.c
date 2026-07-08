/*
Write a program to get an encoded string as input
 and then decode it in the following way. Let us 
 assume that the encoded string is "a1b12a8d2", 
 then the decoded string will be "abbbbbbbbbbbbaaaaaaaadd". 
 In the encoded string, we see 1 after the first 'a'. 
 That is why we see the first 'a' in the decoded string. 
 Then, there are 12 'b's in the decoded string because 
 the encoded string contains "b12" after "a1". 
 The next characters in the decoded string 
 can be easily calculated from the encoded string.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char num[100];
    scanf("%s", num);

    int len = strlen(num);
    int i=0;
    
    while(i<len){
        char ch = num[i];
        i++;

        int lim = 0;
        while(i<len && num[i]>='0' && num[i]<='9'){
            lim = (lim * 10) + (num[i] - '0');
            i++;
        }

        for(int j=0; j<lim; j++){
            printf("%c", ch);
        }
    }
    printf("\n");
    return 0;
}