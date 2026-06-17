#include <stdio.h>
#include <string.h>

struct student{
    char sName[100];
    int marks[5];
};

void printStudent(struct student s){
    printf("\nName = %s, Marks = ", s.sName);
    for(int i=0; i<5; i++){
        printf(" %d ", s.marks[i]);
    }
}

int findSubString(char *mstr, char *fstr){
    int mlen = strlen(mstr);
    int flen = strlen(fstr);

    for(int i=0; i<mlen; i++){
        int j;
        if(mstr[i]==fstr[0]){
            for(j=0; j<flen; j++){
                if(mstr[i+j] != fstr[j]) break;
            }
            if(j==flen) return 1;
        }
    }
    return 0;
}

int main(){
    freopen("input.txt", "r", stdin);
    struct student s[10];

    for(int i=0; i<10; i++){
        scanf("%s", s[i].sName);
        for(int j=0; j<5; j++){
            scanf("%d", &s[i].marks[j]);
        }
    }

    // Char find 'al'
    for(int i=0; i<10; i++){
        int x = findSubString(s[i].sName, "al");
        if(x != 0) continue;
        printStudent(s[i]);
    }
}