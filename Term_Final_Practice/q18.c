/*
QB(14 Page) : SetB (question 2)
*/
#include <stdio.h>
#include<math.h>

double check(int x1,int y1,int x2,int y2){
    double line = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    return line ;
}

int main() { 
    int x1, y1, x2, y2, x3, y3;

    scanf("%d%d%d%d%d%d",&x1, &y1, &x2, &y2, &x3, &y3);

    double i = check(x1, y1, x2, y2);

    double j = check(x2, y2, x3, y3);

    double k = check(x1, y1, x3, y3);

    if(i<j && i<k){
        printf("Shortest Distance %lf", i);
    } else if(j<k && j<i){
        printf("Shortest Distance %lf", j);
    } else{
        printf("Shortest Distance %lf", k);
    }

   return 0;
   
}
