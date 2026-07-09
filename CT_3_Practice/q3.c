/*
Define a structure called "Student" containing six fields to store:

Student ID
Student Name
CGPA
Address
Age in years
Discipline Name

The field names and their data types should be selected reasonably. [L3, C14]

(b) Considering the structure defined in (a), 
write a program that takes data of 1000 
students as input and stores the data in a Student-type array.

Your program will then print the student 
IDs of those students in the "CSE" 
discipline who have the longest name(s). [L4, C14]
*/

#include <stdio.h>
#include <string.h>

struct Student{
    char sName[100];
    char sID[20];
    float cg;
    char address[100];
    int age;
    char discipline[25];
};

/*
a
1
3.2
Dhaka
19
CSE
ab
2
3.3
Khulna
20
CSE
Ahmed Hasan
2026001
3.55
Dhaka
21
CSE
*/
int main(){
    struct Student s[1000];

    for(int i = 0; i < 5; i++) {
        printf("Provide data for Student%d: ", i + 1);

        scanf(" %[^\n]", s[i].sName);
        scanf(" %s", s[i].sID);
        scanf("%f", &s[i].cg);
        scanf(" %[^\n]", s[i].address);
        scanf("%d", &s[i].age);
        scanf(" %s", s[i].discipline);
        
        printf("\n");
    }

    // Finding the longest name length
    int max_name_length = 0;
    for(int i=0; i<5; i++){
        if(max_name_length < strlen(s[i].sName)){
            max_name_length = strlen(s[i].sName);
        }
    }

    for(int i=0; i<5; i++){
        if(strlen(s[i].sName) == max_name_length){
            printf("%s\n", s[i].sID);
        }
    }

    return 0;
}