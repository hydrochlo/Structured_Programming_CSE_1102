/*
7. Determine all possible pairs considering these 100 integers. 
For each pair, you need to determine the similarity between 
the two integers in the pair. The similarity between the 
two integers in a pair will be calculated in the following way.

    Similarity (integer1, integer2) = 
    2 * number of common distinct digits in the two integers / 
    (number of distinct digits in integer1 + number of distinct digits in integer2)
    The similarity between each pair of integers should be printed.
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[10] = {
        102, 2345, 123, 123, 123, 145, 4567, 78, 345, 145
    };

    // for(int i=0; i<10; i++){
    //     for(int j=i+1; j<10; j++){
    //         printf("%d %d\n", arr[i], arr[j]);
    //     }
    // }

    for(int i=0; i<10; i++){
        
        for(int j=i+1; j<10; j++){

            bool num_cnt_1[10] = {0};
            bool num_cnt_2[10] = {0};

            int x = arr[i];
            int y = arr[j];

            while(x>0){
                int xx = x%10;
                num_cnt_1[xx] = true;
                x /= 10;
            }
            while(y>0){
                int yy = y%10;
                num_cnt_2[yy] = true;
                y /= 10;
            }

            int count_1 = 0, count_2 = 0;

            for(int i=0; i<10; i++){
                if(num_cnt_1[i]) count_1++;
            }
            
            for(int i=0; i<10; i++){
                if(num_cnt_2[i]) count_2++;
            }

            int common = 0;
            for(int i=0; i<10; i++){
                if(num_cnt_1[i] && num_cnt_2[i]){
                    if(num_cnt_1[i]==num_cnt_2[i]) common++;
                }
            }

            float similarity = 2.0 * common / (count_1 + count_2);

            printf("Similarity(%d, %d) = %f\n", arr[i], arr[j], similarity);
        }
    }

    return 0;
}
