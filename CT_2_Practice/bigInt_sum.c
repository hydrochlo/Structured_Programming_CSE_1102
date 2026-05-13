#include <stdio.h>
#include <string.h>

int main() {
    char num1[10] = "12345";
    char num2[10] = "67889";
    char result[11]; // To store the sum
    
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

    result[k] = '\0';

    // Here we are showing the output from N to 0;
    printf("Sum: ");
    for (int len = k - 1; len >= 0; len--) {
        printf("%c", result[len]);
    }
    printf("\n");

    return 0;
}