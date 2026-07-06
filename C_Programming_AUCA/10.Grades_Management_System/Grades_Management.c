/*
10.	Demonstrate the use of arrays in C programming by creating a Student Grades Management System. 
    The program will allow the user to input student names and their corresponding grades,
    calculate average grades, and display the highest and lowest grades in the class.
    The program will:
    •	Allow the user to input multiple students and their grades.
    •	Calculate the average grade of the class.
    •	Identify the highest and lowest grades.
    •	Display all students with their grades.

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students you have\n");
    scanf("%d",&n);
    float grades[n];
    char names[n][50];

    for (int i=0; i<n;i++){
        printf("Enter the name of the %d student\n", i+1);
        scanf("%s", names[i]);
        printf("Enter %s grades\n",names[i]);
        scanf("%f", &grades[i]);
    }
    float highest, lowest;
    float avg, sum;
    highest = grades[0];
    lowest = grades[0];
    for(int k=0; k< n; k++){
        if(grades[k]>highest){
            highest = grades[k]; 
        }
        if(grades[k]<lowest){
            lowest = grades[k];
        }
        sum = sum + grades[k];
    }
    avg = sum/n;
    for (int j=0; j< n; j++){
        printf("The student name is %s with %.2f marks\n",names[j], grades[j]);
    }
    printf("The Highest marks are %.2f\n",highest );
    printf("The lowest marks are %.2f\n",lowest );
    printf("The average marks are %.2f\n",avg);
    return 0;
}