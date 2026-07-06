/* create a Simple Invoice Generation System that uses the function to display printf
formatted output. The program will accept user input for the details of an invoice (such as the
item name, price, quantity, and calculate the total), and display a neatly formatted invoice.*/

//Simple Invoice Generation System.
#include<stdio.h>
int main(){
	char item_name[100];
	int price,quantity;
	printf("Enter the name of the item\n");
	fgets(item_name,sizeof(item_name),stdin);
//	scanf("%s", &item_name);
	printf("Enter the price\n");
	scanf("%d",&price);
	printf("Enter the quantity\n");
	scanf("%d",&quantity);
	printf("The Total is %d frw for the your %s", price*quantity, item_name);
	return 0;
}