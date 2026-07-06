/*Build a Simple Calculator program in C that performs basic arithmetic operations
like addition, subtraction, multiplication, and division. The program will make use of
different types of operators in C: arithmetic operators, relational operators, and logical
operators.*/
#include<stdio.h>
int main(){
    int num1, num2, result;
    char op;
    /* To be demostrated in this project
        relational operators( == or != ).
        logical operators( || or && ).
        arithmetic operators( +,*,/,-).
    */
    printf("|| SIMPLE CALCULATOR || \n");
    printf("Enter + for addition \n");
    printf("Enter - for subtraction \n");
    printf("Enter * for multiplication \n");
    printf("Enter / for division \n");
    scanf(" %c",&op);
     // use relation and logical operator.
    if(op == '+' || op == '-' || op == '*' || op == '/'){
        printf("Enter the first number you want\n");
        scanf("%d", &num1);
        printf("Enter the second number you want\n");
        scanf("%d", &num2);
    }
    // Demonstrate the use of arithmetic operator.


    switch(op){
        case '+':
            result = num1+num2;
            printf("The result of addition is = %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result of subtraction is = %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result of Multiplication is = %d\n", result);
            break;
        case '/':
            if(num2 != 0){
                result = num1/num2;
                printf("The result of Division is = %d\n", result);
            }
            else{
                printf("Math Error, Any number divided by zero is impossible\n");
            }
            break;
        
        default:
            printf("You entered a wrong operator\n");
    }
     
    return 0;
}
