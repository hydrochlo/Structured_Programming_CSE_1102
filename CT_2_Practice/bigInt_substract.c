/* 
2. In systems where standard integer types 
(like int or long long) are limited to 
32 or 64 bits, performing arithmetic on 
numbers with hundreds of digits requires 
a custom solution. You are tasked with writing a
 program that subtracts one non-negative 
 integer from another. Both integers are 
 represented as strings. Since this is a 
 basic implementation, you may assume that 
 the first number ( num1 ) is always greater 
 than or equal to the second number ( num2 ).
 Your program must simulate the manual 
 subtraction process (borrowing from the 
 left when the top digit is smaller than 
 the bottom digit) and ensure the final 
 output does not contain unnecessary leading zeros.
    0 <= length of num1, num2 <= 100
    num1 >= num2
    The input strings will not have leading zeroes.
    You cannot use built-in functions like atoi, atol , or 
    sscanf to convert the entire string into a numeric type.
    <num1: "12345", num2: "9786", Output: 2559>,  <num1: "1000", num2: "1", Output: 999>, 
    <num1: "100" , num2: "100" , Output: 0>, <num1: "1050" , num2: "50", Output: 1000>
*/

// MINUS
#include <stdio.h>
#include <string.h>

/*
88888888888888888888
11111111111111111111

100000000000000000000
1

1000000000000
999999999999

5000000000500
500

99999999999999999999
9

12345678901234567890
12345678901234567890
*/

int main(){
  char num1[100] = "12345678901234567890";
  char num2[100] = "12345678901234567890";
  char result[101];
  
  int len1 = strlen(num1);
  int len2 = strlen(num2);
  
  int i = len1-1, j=len2-1;
  int carry = 0, k = 0;
  
  while(i>=0 || j>=0){
    int x, y;
    x = (i>=0) ? num1[i--] - '0': 0;
    if(carry==1){
      y = (j>=0) ? num2[j--] - '0' + 1: 0 + 1;
    } else {
      y = (j>=0) ? num2[j--] - '0': 0;
    }
    
    
    if(y>x){
      x = 10 + x;
      carry = 1;
    }
    
    int sum = x - y;
    result[k++] = sum + '0';
  }
  
  result[k] = '\0';
  int started = 0;
  int len_r = strlen(result) - 1;
  for(int i=len_r; i>=0; i--){
    if (result[i] != '0' || started || i==0) {
      printf("%c", result[i]);
      started = 1; // We've officially started printing the number
    }
  }
  printf("\n");
  
  return 0;
}