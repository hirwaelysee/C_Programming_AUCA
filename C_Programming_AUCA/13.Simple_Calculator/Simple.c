/*
13.	Create a simple calculator that can perform basic arithmetic operations like addition,
    subtraction, multiplication, and division. We'll structure the code using functions
    for each operation and then call them from the main function.
*/
#include<stdio.h>
void addition(float num1, float num2){
    printf("The sum between two numbers is: %.2f\n", num1+num2);
}
void subtraction(float num1, float num2){
    printf("The subtraction between two numbers is: %.2f\n", num1-num2);
}
void multiplication(float num1, float num2){
    printf("The product between two numbers is: %.2f\n", num1*num2);
}
void quotient(float num1, float num2){
    printf("The quotient between two numbers is: %.2f\n", num1/num2);
}
int main(){
    float num1, num2;
    printf("Enter num1 first and num2 secondly\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    addition(num1,num2);
    subtraction(num1,num2);
    multiplication(num1,num2);
    quotient(num1,num2);
    return 0;
}