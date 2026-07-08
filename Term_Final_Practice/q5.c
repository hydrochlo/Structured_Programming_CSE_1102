// 25 Batch: CT4 (SET A) , question2
/*
You will be given a string as input. You will have to determine 
whether the string can be considered as a floating point number
or not. For example, it the input string is "a254.2", this 
string cannot be considered as a floating point number. Moreover,
the input string "1254" should also not be considered as a floating
point number. However, the input string "2.578" can be considered
as a floating point number.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char f_string[100];
    scanf("%s", f_string);

    int n = strlen(f_string);
    int is_number = 1; 

    for (int i = 0; i < n; i++) {
        if(f_string[i] == '.') is_number = 1;
        else if(!(f_string[i] >= '0' && f_string[i] <= '9')) {
            is_number = 0;
            break;
        }
    }

    // TO count the number of dots(.)
    int cnt_dot = 0;
    if (is_number) {
        for (int i = 0; i < n; i++) {
            if (f_string[i] == '.') { 
                cnt_dot++;
            }
        }
        // A valid number have 0 dot(.) or 1 dot(.)
        if(cnt_dot<=1){
            printf("Possible\n");
            return 0;
        } else {
            printf("Impossible\n");
            return 0; 
        }
    } else {
        printf("Impossible\n");
    }

    return 0;
}