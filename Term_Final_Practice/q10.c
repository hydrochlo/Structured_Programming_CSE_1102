/*

*/
#include <stdio.h>
#include <string.h>

struct Student{
    char sID[10];
    char sName[50];
    float cgpa;
    char address[50];
    int age;
    char dName[10];
};

int main(){
    struct Student s[2];

    for(int i = 0; i < 2; i++) {
        scanf(" %[^\n]", s[i].sID);
        scanf(" %[^\n]", s[i].sName);
        scanf("%f", &s[i].cgpa);
        scanf(" %[^\n]", s[i].address);
        scanf("%d", &s[i].age);
        scanf("%s", s[i].dName); 
    }
    int max_length = 0;
    for(int i=0; i<2; i++){
        if(strlen(s[i].sName)>max_length){
            max_length = strlen(s[i].sName);
        }
    }

    for(int i=0; i<2; i++){
        if(strlen(s[i].sName) == max_length){
            printf("Student ID = %s", s[i].sID);
        }
    }

    // printf("\n%d\n", max_length);
    return 0;
}

/*
260246
Shahadat Hossain
3.99
Dhaka, Bangladesh
20
CSE
260208
KCN
3.88
Khulna, Bangladesh
21
CSE
*/