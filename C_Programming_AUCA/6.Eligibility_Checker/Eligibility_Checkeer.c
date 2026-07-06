/* create a Eligibility Checker program that uses logical operators to determine whether 
a person is eligible to vote or drive based on their age and certain conditions.
The program will check two conditions using logical operators like AND (&&), OR
(||), and NOT (!), and then print appropriate messages based on these conditions.*/

#include<stdio.h>
int main(){
    int age;
    int hasid;
    int hasLicenseTest;
    printf("||||| Eligibility Checker for both Driving and Voting |||||\n");
    printf("Enter your age \n");
    scanf("%d",&age);

    printf("Do you have a driving License (1 = Yes, 0= No)\n");
    scanf("%d", &hasLicenseTest);

    printf("Do you have an id card (1 = Yes, 0 = No)\n");
    scanf("%d", &hasid);

    if(!hasid){
        printf("You are not allowed to vote because you don't have an id\n");
    }else if(age >= 18 && hasid == 1){
        printf("You are allowed to vote\n");
    }else{
        printf("You are not allowed to vote because you are under age\n");
    }

    if(!hasLicenseTest){
        printf("You are not allowed to drive\n");
    }else if(age >= 18 && hasLicenseTest == 1){
        printf("You are allowed to drive\n");
    }else if(age < 18 || hasLicenseTest == 0){
        printf("You are not allowed to drive because you are underage\n");
    }
    return 0;
}