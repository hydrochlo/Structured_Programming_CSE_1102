/*
Write a recursive function int countValidChars(char *str, char target)
 using pointer arithmetic. The function should count 
 how many times the target character appears in the string,
 but the recursion must terminate early if it encounters 
 an exclamation mark (!).

Sample Input: str = "programming!is!fun", target = 'g'

Sample Output: 2 
(Explanation: It counts the two 'g's in "programming" 
and stops at the first '!' before reaching any other characters)
*/