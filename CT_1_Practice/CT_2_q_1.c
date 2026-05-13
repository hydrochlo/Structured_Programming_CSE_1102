/*
Write a programe to get a string as input and then encode 
the string in the following way. Let us assume that the input 
string is 'aabbbbbbbbbbbbccdaa', the output will be 
'a2b12c2d1a2'. In the input string we see that there is a fragment 
of 'a' at first. The fragment contains 2 'a's. That is why the output
(encoded string) contains "a2" at first. Then, there is a fragment of
12 consecutive 'b's in the input string. Thus, we can see "b12" in 
the output string. The rest of the output string can be easily 
detemined from the rest of the input string.
*/

/* ROUND LENGTH ENCODING PROBLEM */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);

    int n = strlen(str);
    
    for(int i=0; i<n; i++){
        char current = str[i];
        int count = 1;

        while(i+1 < n && str[i] == str[i+1]){
            count++;
            i++;
        }
        printf("%c%d", current, count);
    }

    return 0;
}