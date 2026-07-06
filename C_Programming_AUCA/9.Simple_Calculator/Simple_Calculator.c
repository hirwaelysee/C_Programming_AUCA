/*
9.	Create a simple calculator program that can perform basic arithmetic operations using 
    the switch-case statement. The program will prompt the user to select an operation
    from a menu and then input the numbers required for that operation. Based on the user's selection,
    the corresponding calculation will be performed and the result will be displayed.
    The program will support the following operations:
•	Addition
•	Subtraction
•	Multiplication
•	Division

*/
#include<stdio.h>
int main(){
    int num1, num2, result;
    int choice;
    printf("=============Simple Calculator===============\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Division\n");
    printf("Enter 4 for Multiplication\n");
    scanf("%d", &choice);
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the Second number\n");
    scanf("%d",&num2);
    switch (choice)
    {
    case 1:
        printf("The sum between %d and %d = %d\n", num1, num2, num1+num2);
    break;
    case 2:
        printf("The subtraction between %d and %d = %d\n", num1, num2, num1-num2);
    break;
    case 3:
        printf("The quotient between %d and %d = %d\n", num1, num2, num1/num2);
    break;
    case 4:
        printf("The product between %d and %d = %d\n", num1, num2, num1*num2);
    break;
    default:
        printf("You entered a wrong choice. Try again!!!");
        break;
    }
    return 0;
}