/*
QB: 13 Page (1(a, b))
*/
#include <stdio.h>

int main(){
    int arr[10][6] = {
        // CSE Student Data (Discipline Code: 2)
    // dis  id    att ct secA secB
        {2, 2001, 9, 25, 10, 12},
        {2, 2002, 8, 28, 4, 20},
        {2, 2003, 10, 28, 19, 5},
        {2, 2004, 7, 12, 6, 18},
        {2, 2005, 9, 22, 15, 8}, // Inconsistent data row
        
        // ECE Student Data (Discipline Code: 9)
        {9, 9001, 18, 20, 25, 22},
        {9, 9002, 9, 24, 26, 25},
        {9, 9003, 12, 15, 12, 15}, // Inconsistent data row
        {9, 9004, 7, 22, 20, 1},
        {9, 9005, 10, 29, 20, 3}
    };

    int cse_sec_A = 0, cse_std = 0, ece_sec_A = 0, ece_std = 0, cnt_wrong_data = 0;
    float avg1, avg2;

    for(int i=0; i<10; i++){
        if(arr[i][0] == 2){
            cse_std++;
            cse_sec_A += arr[i][4]; 
        }
        if(arr[i][0] == 9){
            ece_std++;
            ece_sec_A += arr[i][4]; 
        }
    }

    avg1 = 1.0*cse_sec_A / cse_std;
    avg2 = 1.0*ece_sec_A / ece_std;

    printf("Average SecA Marks of CSE = %f\n", avg1);
    printf("Average SecA Marks of ECE = %f\n", avg2);

    for(int i=0; i<10; i++){
        if(arr[i][2]>10) cnt_wrong_data++;
        if(arr[i][3]>30) cnt_wrong_data++;
        if(arr[i][4]>30) cnt_wrong_data++;
        if(arr[i][5]>30) cnt_wrong_data++;

    }

    printf("Wrong data inputed = %d", cnt_wrong_data);

    int interesting_marks = 0;
    for(int i=0; i<10; i++){
        if(arr[i][3]>=25 && (arr[i][4]+arr[i][5]) < 25){
            interesting_marks++;
        }
    }

    printf("Interesting marks count = %d", interesting_marks);

    return 0;
}