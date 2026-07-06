/*	create a Menu-Driven Calculator that allows users to perform basic arithmetic
operations (addition, subtraction, multiplication, division) using a do while
loop. The program will repeatedly display a menu to the user, allowing them to choose an
operation and perform the calculation. The loop will continue until the user decides to
exit.	*/
#include<stdio.h>
int main(){

	int choice;
	float num1, num2, result;

do {
	printf("!!!!The Menu driven Operations and Services!!!!\n");
	printf("Enter 1 for Addition + \n");
	printf("Enter 2 for Subtraction - \n");
	printf("Enter 3 for Multiplication * \n");
	printf("Enter 4 for Division / \n");
	printf("Enter 5 to exit the program \n");

	printf("Enter your choice between 1 and 5 \n");
	scanf("%d", &choice);
	if (choice >= 1 && choice <= 4) {
		printf("Enter num1 \n");
		scanf("%f", &num1);
		printf("Enter num2 \n");
		scanf("%f", &num2);
	}
	switch (choice) {
		case 1:
			result = num1+num2;
			printf("The result of Addition between %.1f and %.1f is %.1f\n", num1, num2, result);
			break;
		case 2:
			result = num1-num2;
			printf("The result of Subtraction between %.1f and %.1f is %.1f\n", num1, num2, result);
			break;
		case 3:
			result = num1*num2;
			printf("The result of Multiplication between %.1f and %.1f is %.1f\n", num1, num2, result);
			break;
		case 4:
			if ( num2 == 0) {
				printf("Math Error, Any number divided by zero is Math Error\n");
			}else {
				result = num1/num2;
				printf("The result of Division between %.1f and %.1f is %.1f\n", num1, num2, result);
			}
			break;
		case 5:
			printf("You exited the program\n");
			break;
		default:
			printf("You entered an invalid choice \n");
			break;
	}
}while (choice !=5);
return 0;
}