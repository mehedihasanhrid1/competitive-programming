#include <stdio.h>
//Write a C program to print your name, date of birth, and mobile number. 
int main() {
    char name[50];
    char dob[20];
    char mobile[15];

    // Get name input from the user
    printf("Enter your name: ");
    scanf("%49[^\n]", name); // Read up to 49 characters until newline

    // Get date of birth input from the user
    printf("Enter your date of birth (e.g., January 1, 2000): ");
    scanf(" %19[^\n]", dob); // Read up to 19 characters until newline

    // Get mobile number input from the user
    printf("Enter your mobile number: ");
    scanf(" %14[^\n]", mobile); // Read up to 14 characters until newline

    // Print the entered information
    printf("\nName: %s\n", name);
    printf("Date of Birth: %s\n", dob);
    printf("Mobile Number: %s\n", mobile);

    return 0;
}
