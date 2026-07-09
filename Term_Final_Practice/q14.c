// 24 Batch: Term final (6a)
#include <stdio.h>
#include <string.h>

int isPalindrome(char *p, int i, int m, int l){
    if(i>m) {
        return 1;
    }
    if(p[i] != p[l-i]){
        return 0;
    }
    return isPalindrome(p, i+1, m, l);
}

int main(){
    char str[100] = "aabbcc";

    int n = strlen(str);
    int mid = n/2 - 1;

    int res = isPalindrome(str, 0, mid, n-1);

    if(res==1) printf("YES");
    else printf("NO");
}