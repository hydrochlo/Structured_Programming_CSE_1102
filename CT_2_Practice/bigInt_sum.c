/*
In many programming languages, standard integer types 
(like int or long long in C) have a maximum capacity. 
If you try to store a number with 50 or 100 digits, 
the program will overflow. To solve this, we can 
represent very large numbers as strings.

Your task is to write a program that takes two strings, 
num1 and num2, representing non-negative integers, 
and returns their sum as a string.

Note: You cannot convert the strings directly 
into integers using built-in functions (like atoi). 
you must process the strings digit by digit, 
simulating how you would add numbers on paper.
[num1= "123456", num2="67889" , Expected Output: 80234] 
, [num1= "999", num2="1" , Expected Output: 1000], 
[num1= "0", num2="0" , Expected Output: 0]
*/
#include <stdio.h>
#include <string.h>

int main() {
    char num1[30] = "798946431346797946461377988";
    char num2[30] = "678897946463135479941279888";
    char result[31]; // To store the sum
    
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = x + y + carry;
        carry = sum / 10;
        // Here we are storing the result form 0 to N;
        result[k++] = (sum % 10) + '0';
    }

    if (carry > 0) {
        result[k++] = carry + '0';
    }

    result[k] = '\0';

    // Here we are showing the output from N to 0;
    printf("Sum: ");
    for (int len = k - 1; len >= 0; len--) {
        printf("%c", result[len]);
    }
    printf("\n");

    return 0;
}
