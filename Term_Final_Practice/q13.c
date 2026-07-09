#include <stdio.h>
#include <ctype.h>

void printConsonants(char *s, int index) {
    if (s[index] == '\0') {
        return;
    }
    
    char ch = s[index];
    
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
        printf("%c", s[index]);
    }

    printConsonants(s, index + 1);
}

int main() {
    char st[100];

    scanf(" %[^\n]", st); 
    
    printConsonants(st, 0);
    printf("\n");
    
    return 0;
}