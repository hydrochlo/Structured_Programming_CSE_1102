/*
Write a program to get an encoded string as input
and then decode it in the following way. Let us 
assume that the encoded string is "a1b7a8d2", 
then the decoded string will be "abbbbbbbbaaaaaaaaadd".
In the encoded string, we see 1 after the first 'a'. 
That is why we see the first 'a' in the decoded string. 
Then, there are 7 'b's in the decoded string because the 
encoded string contains "b7" after "a1". The next characters
in the decoded string can be easily calculated from the 
encoded string. It is given that in the encoded string,
each integer contains only a single digit. (10)
*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%s", s);

    int n = strlen(s);
    for(int i=1; i<n; i++){
        int lim = s[i] - '0';
        int j = 0;
        if(i%2 != 0){
            while(j < lim){
                printf("%c", s[i-1]);
                j++;
            }
        }
    }

    return 0;
}