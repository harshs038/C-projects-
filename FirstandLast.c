#include<stdio.h>
int main(){
    int n ; 
    printf("Enter a number : ");
    scanf("%d", &n );
    int sum = 0 ;
    sum = sum + n%10 ; 
    while (n>9){
        n = n/10 ; 
    }
    sum = sum + n ;
    printf("Sum of first and last digit is : %d", sum );
    
    return 0 ;
}