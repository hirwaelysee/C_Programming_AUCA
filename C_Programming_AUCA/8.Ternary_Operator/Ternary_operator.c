/*

Use ternary operator to solve the following problems:
•Checking if a number is even or odd.
•Determining the maximum of two numbers.
•Categorizing a number as positive, negative, or zero.
•Finding the grade based on marks.

*/
#include<stdio.h>
void even_odd(){
    int num;
    printf("Enter a number to check if even or odd\n");
    scanf("%d",&num);
    num%2 ==0? printf("It is even\n"):printf("It is an odd number\n");
}
void maximum(){
    int num1, num2;
    printf("Enter num1\n");
    scanf("%d",&num1);
    printf("Enter num2\n");
    scanf("%d",&num2);
    num1>num2? printf("num1 is greater than num2\n"):printf("num2 is greater than num1\n");
}
void checker(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    (number>0) ? printf("The number is positive\n"):
    (number<0) ? printf("The number is negative\n"):
                 printf("The number is zero\n");
}
void grades(){
    int grade;
    printf("Enter your grades in percentage\n");
    scanf("%d",&grade);
    (grade >=80 && grade <=100)?printf("Your grades is A\n"):
    (grade >= 70 && grade < 80)? printf("Grade: B\n"):
    (grade >= 60 && grade <70)? printf("Grade: C\n"):
    (grade >= 50 && grade <60)? printf("Grade: D\n"):
    (grade >= 0 && grade <50)?  printf("Grade: F\n"):
                   printf("Invalid Marks\n");
}
int main(){
    // checker();
//    maximum();
    grades();
   return 0;
}