#include <stdio.h>
#include <string.h>


int main(){
    char str1[100] = "abyyydeabxxyyaba";
    int i=0; 
    int len = strlen(str1);

    while(i<len-1){
        if(str1[i]=='a' && str1[i+1]=='b'){
            int j=len;
            while(j>=i){
                str1[j] = str1[j-1];
                j--;
            }
            len++;
            str1[i] = 'c';
            str1[i+1] = 'd';
            str1[i+2] = 'f';
        }
        i++;
    }

    printf("%s\n", str1);
    return 0;
}