#include<stdio.h>
int main(){
    int n , m , p ; 
    printf("Enter number of students : ");
    scanf("%d", &m);
    printf("Enter number of subjects : ");
    scanf("%d", &p);
    for (int i = 1 ; i <= m ; i++){
        int sum = 0 ;
        printf("Enter %d marks for student %d : ", p , i );
        for (int j = 1 ; j <= p ; j++){
            scanf("%d", &n );
            sum = sum + n ;
        }
        float avg = (float)sum / p ;
        printf("Average of student %d is : %.2f\n", i , avg );
    }
    return 0 ; 
}