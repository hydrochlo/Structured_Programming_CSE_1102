#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void trim(char * b, char * a)
{
    int i = 0, j = strlen(a)-1;

    while(a[i]==' ') i++;
    while(a[j] == ' ') j--;

    int k = 0;
    for (int index = i; index <= j; index++) {
        b[k] = a[index];
        k++;
    }
    b[k] = '\0';
}

int main() {
    int n = 5;
    char str[100][100] = {
        "Rezwanur Rahman Ruben $ 010201 $ Nazir Ghat, Khulna  $  CSE $ 3.81", //20
        "Ahmed Shah Mashiyat $ 010203 $ Nirala, Khulna  $  CSE $ 3.76", // 25
        "Manishankar Mondal $ 010205 $ Alkatra mill, Khulna  $  CSE $ 3.83", //22
        "Mr. unknown in math $ 271201 $ Nirala, Khulna  $  Math $ 3.87", //23
        "Mr. unknown in physics $ 271701 $ Nirala, Khulna  $  Physics $ 3.82" //26
    };


    int len[5];

    for (int i = 0; i < n; i++){
        len[i]=strlen(str[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < len[i]; j++){
            if(str[i][j]=='$') str[i][j] = 0;
        }
    }


    char name[5][100], id[5][10], place[5][100], dept[5][100], cgpa[5][10];

    for (int i = 0; i < n; i++){
        int count = 0;
        trim(name[i], str[i]);
        // 50
        // "Rezwanur Rahman Ruben \0 010201 \0 Nazir Ghat, Khulna  \0  CSE \0 3.81",
        for (int j = 0; j < len[i]; j++){
            if(str[i][j] == 0){
                count++;
                if(count==1) trim(id[i], &str[i][j+1]);
                if(count==2) trim(place[i], &str[i][j+1]);
                if(count==3) trim(dept[i], &str[i][j+1]);
                if(count==4) {
                    trim(cgpa[i], &str[i][j+1]); 
                    break;
                }
            } 
        }
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     printf("------------------------\n");
    //     printf("%s\n", name[i]);
    //     printf("%s\n", id[i]);
    //     printf("%s\n", place[i]);
    //     printf("%s\n", dept[i]);
    //     printf("%s\n", cgpa[i]);
    //     printf("------------------------");
    // }

    int batch_27_or_01 = 0;
    int CSE_dis = 0;
    int CG_25 = 0;
    int same_place = 0;


    for(int i=0; i<n; i++){
        if((id[i][0]=='2' && id[i][1]=='7') || (id[i][0]=='0' && id[i][1]=='1')){
            batch_27_or_01++;
        }
        if(strcmp(dept[i], "CSE") == 0){
            CSE_dis++;
        }

        // "1.25" -> 1.25
        if(atof(cgpa[i]) > 3.85){
            CG_25++;
        }
        if(strcmp(place[i], "Nirala, Khulna") == 0){
            same_place++;
        }
    }

    printf("%d\n", batch_27_or_01);
    printf("%d\n", CSE_dis);
    printf("%d\n", CG_25);
    printf("%d\n", same_place);

    return 0;
}