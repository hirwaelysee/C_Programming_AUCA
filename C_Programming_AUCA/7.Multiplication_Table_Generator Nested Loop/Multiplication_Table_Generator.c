/*
create a Multiplication Table Generator using nested loops in C programming. The
program will generate the multiplication table for numbers from 1 to a given limit and
display the results in a structured format.
*/ 
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        for (int j=1; j<=i ;j++){
            printf("%d * %d = %d\n\n", i, j, i*j);
        }
    }
    return 0;
}