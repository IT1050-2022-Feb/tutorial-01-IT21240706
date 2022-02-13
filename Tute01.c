/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, sum;
  float average;

  printf("Enter first mark : ");
  scanf("%d", &mark1);

  printf("Enter second mark : ");
  scanf("%d", &mark2);

  sum = mark1 + mark2;
  average = sum / 2.0;

  printf("Average : %.2f", average);
  
  return 0;
}

