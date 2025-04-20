#include <stdio.h>

int main() {
   int num , h, w;
   printf("Enter number of person :"); 
   scanf("%d", &num);
   for (int i = 1 ; i <= num ; i ++){
       printf("Enter height of  person % d :", i );
       scanf("%d", &h);
         printf("Enter  weight of  person % d :", i );
       scanf("%d", &w);
   }
   int count = 0 ; 
       if (h >= 170 && w<=50){
           count++; 
       }
       printf("Total number of person is : %d", count);
    return 0;
}
