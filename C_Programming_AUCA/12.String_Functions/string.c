/*
12.	Create a program that implements common string manipulation functions
    that are commonly found in the C Standard Library, such as:
    •	String Length: A function to calculate the length of a string.
    •	String Concatenation: A function to concatenate two strings.
    •	String Comparison: A function to compare two strings.

*/
#include<stdio.h>
#include<string.h>
int main(){
    char name1[50] = "HirwaElysee";
    char name2[50] = "IshimweInes";
    printf("The Length of name1 is %zu\n",strlen(name1));
    printf("The Length of name2 is %zu\n",strlen(name2));
    printf("The Concatenation of two names is %s\n",strcat(name1,name2));
    printf("The comparison between two names %d\n",strcmp(name1,name2));
    return 0;
}