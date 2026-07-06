/* Quiz (SET B): question4
Write a program to get a string with spaces.
Your program should then determine and print the
length of the longest word. There can be multiple 
spaces between two words.
Input: " I   Love   Bangladesh"
Output: 10
*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    fgets(s, 100, stdin);

    int i = 0, max_len = 0, temp_len = 0;
    int len = strlen(s);

    while(i<len){
        temp_len = 0;
        while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            temp_len++;
            i++;
        }
        if(temp_len>max_len) max_len = temp_len;
        i++;
    }
    printf("%d\n", max_len);
}