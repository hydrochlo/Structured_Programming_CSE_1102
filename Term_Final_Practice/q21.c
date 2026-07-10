/*
QB(14 Page): SetA : 2
*/
#include <stdio.h>

struct Student {
    char name[100];
    float cgpa;
    int dCode;
};

int main(){
    struct Student s[10];
    int n=10;
    for(int i=0; i<n; i++){
        scanf(" %[^\n]", s[i].name);
        scanf("%f", &s[i].cgpa);
        scanf("%d", &s[i].dCode);
    }

    float max_marks = 0;
    for(int i=0; i<n; i++){
        if(s[i].dCode==2 && s[i].cgpa>max_marks){
            max_marks = s[i].cgpa;
        }
    }

    printf("Max CGPA in CSE discipline is = %f\n", max_marks);
    for(int i=0; i<n; i++){
        if(s[i].cgpa==max_marks){
            printf("%s\n", s[i].name);
        }
    }

    return 0;
}
/*
Input:
John Doe
3.60 1
Jane Smith
3.85 2
Alan Turing
3.95 2
Grace Hopper
3.95 2
Ada Lovelace
4.00 3
Bob Ross
3.20 1
Charlie Brown
2.90 2
Emily Watson
3.70 4
Frank Castle
3.40 2
George Clooney
3.10 3
*/