#include <stdio.h>



int main() {

  float marks;



  // Get the student's marks as input

  printf("Enter marks: ");

  scanf("%f", &marks);



  // Determine the grade based on the provided bins

  if (marks >= 85 && marks <= 100) {

    printf("Grade A\n");

  } else if (marks >= 70 && marks < 85) {

    printf("Grade B\n");

  } else if (marks >= 55 && marks < 70) {

    printf("Grade C\n");

  } else if (marks >= 40 && marks < 55) {

    printf("Grade D\n");

  } else if (marks >= 0 && marks < 40) {

    printf("Grade F\n");

  } else {

    printf("Invalid input. Marks should be between 0 and 100.\n");

  }



  return 0;

}

