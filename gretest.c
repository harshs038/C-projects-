// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n , max =0 ;
  printf("Enter a number : ");
  scanf("%d", &n );
  while(n>0){
      if(n%10>max){
      max = n % 10 ;
  }
  n = n / 10 ;
  }
  printf("The greatest number is : %d ", max );
    return 0;
}