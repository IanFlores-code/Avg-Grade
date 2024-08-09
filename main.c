#include <stdio.h>
#include <stdlib.h>

// Function to take user input and scans into an array
void user_input(double array[10], int size) {
  for (int i = 0; i < size; i++) {
    printf("Enter a Grade: ");
    if (scanf("%lf", &array[i]) != 1) {
      char c;
      scanf(" %c", &c); // save anything that isnt a number into c
      if (c == 'q' || c == 'Q') {
        exit(0);
      } // quit if q or Q is entered
    }
  }
}
// function to calculate the average of the items in the array
double response(double array[10], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  double average = sum / size;
  printf("The Average Grade is: %.2lf\n", average);
  return average;
}
// The main function
int main() {

  double array[10];

  do {
    user_input(array, 10);
    response(array, 10);
  } while (1); // infinite loop for the code

  return 0;
}