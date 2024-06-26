// TODO: x  Write a program to print information about your result.
/*
    Step 1: Get the enrollment number from the student.
    Step 1.2: Get the age of the user (optional).
    Step 2: Get the value of 4 subjects.
    Step 3: Print the average marks.
    Step 4: Print the percentage.
    Step 5: If the student has more than 50%, then print that the student has passed; otherwise, print that the student has failed.
*/

#include <stdio.h>

int main() {

    // Step 1: Get the enrollment number from the student.
    char enrollmentNum[20];
    printf("Enter your enrollment number: ");
    scanf("%19s", &enrollmentNum);

    // Step 1.2: Get the age of the user (optional).
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Step 2: Get the value of 4 subjects.
    int marks[4];
    for (int i = 0; i < 4; i++) {
        printf("Enter the marks of subject %d out of 30: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Step 3: Print the average marks.
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += marks[i];
    }
    float average = sum / 2.0;
    printf("The average marks are: %f\n", average);

    // Step 4: Print the percentage.
    float percentage = (sum / 120.0) * 100;
    printf("The percentage is: %f\n", percentage);

    // Step 5: If the student has more than 50%, then print that the student has passed; otherwise, print that the student has failed.
    if (percentage > 50) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }

    return 0;

}

// /******************* Output *********************
//
// Enter your enrollment number: 23ID01CE010
// Enter your age: 17
// Enter the marks of subject 1 out of 30: 30
// Enter the marks of subject 2 out of 30: 27
// Enter the marks of subject 3 out of 30: 23
// Enter the marks of subject 4 out of 30: 21
// The average marks are: 50.500000
// The percentage is: 84.166664
// Congratulations! You have passed.
//
// /************************************************/