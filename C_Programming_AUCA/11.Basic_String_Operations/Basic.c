/*
11.	Write a program to cover basic string operations such as:
    •	Storing multiple strings in an array.
    •	Performing string operations like concatenation, comparison, and length calculation.
    •	Display for a specific string in the array.
    •	Displaying the strings in the array.

*/
#include<stdio.h>
#include<string.h>
int main(){
        char names[3][50];
        //Entering students
        for (int i=0; i<3;i++){
            printf("Enter the name of the %d student\n", i+1);
            scanf("%s", names[i]);
        }
        // Perform string operations
        int compare = strcmp(names[0], names[1]);
        size_t length = strlen(names[0]);
        char concat[100]; // Larger buffer for concatenation
        strcpy(concat, names[0]);
        strcat(concat, names[1]);
        
        // Print results
        printf("\nNames You Entered:\n");
        for (int i=0; i<3;i++){
            printf("%s\n", names[i]);
        }

        printf("\nString Operations:\n");
        printf("Comparison between %s and %s: %d\n", names[0], names[1], compare);
        printf("Length of %s: %zu\n", names[0], length);
        printf("Specific String in the array: %s\n", names[1]);
        printf("Concatenation of %s and %s: %s\n", names[0], names[1], concat);
        
        return 0;
}
