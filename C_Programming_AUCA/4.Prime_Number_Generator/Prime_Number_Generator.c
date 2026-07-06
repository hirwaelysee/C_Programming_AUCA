/*create a Prime Number Generator program that uses a for loop to find and display all prime numbers
 within a specified range. The program will prompt the user to input a number, 
 and then it will display all the prime numbers from 1 to that number.
*/
// Prime Number Generator
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number to find the prime number in range\n");
    scanf("%d", &num);
    for (int i=1; i<num;i++) {
        int divisor=0;
        for (int j=1; j<=i; j++) {
            if (i%j == 0) {
                divisor+=1;
            }
        }
        if (divisor == 2) {
            printf("The prime numbers are %d\n",i);
        }
    }
     return 0;
}