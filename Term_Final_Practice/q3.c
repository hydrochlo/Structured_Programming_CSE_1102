/*
Write a program to scan four integer numbers. If the average 
of these is a whole number, the print "YES". Otherwise, 
print "NO". You must use a conditional operator for 
decesion making and printing.
*/
#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if((a+b+c+d)%4 == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}