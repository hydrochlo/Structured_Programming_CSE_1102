/*
QB (15 page): lab Test: SetB: 1
*/
#include <stdio.h>
#include <string.h>

int main(){

    char s[100] = "abbabacbb";
    int n = strlen(s);
    int cnt = 0;

    for(int i=0; i<n-2; i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') cnt++;
        else if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='b') cnt++;
        else if(s[i]=='b' && s[i+1]=='a' && s[i+2]=='c') cnt++;
        else if(s[i]=='b' && s[i+1]=='c' && s[i+2]=='a') cnt++;
        else if(s[i]=='c' && s[i+1]=='a' && s[i+2]=='b') cnt++;
        else if(s[i]=='c' && s[i+1]=='b' && s[i+2]=='a') cnt++;
    }

    printf("Occurances are = %d\n", cnt);

    return 0;
}