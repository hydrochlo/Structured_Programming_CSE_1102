/*
Write a program to a string with spaces. Your program should then determine the
number of words separated by spaces. There can be multiple spaces between
two words.
Input: " I  love  Bangladesh"
Output: 3
*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    fgets(s, 100, stdin);

    int i = 0, cnt = 0, flag = 0;
    int len = strlen(s);
    while(i < len){
        while(!((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))){
            i++;
            flag = 1;
        }
        if(flag) {
            cnt++; 
            flag = 0;
        }
        i++;
    }
    printf("%d\n", cnt);
}