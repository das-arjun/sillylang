printf("%f", SQRT(10000));
#include <stdio.h>

int main() {
  // Create an integer variable that will store the number we get from the user
  int myNum;

  // Ask the user to type a number
  printf("Type a number and press enter: \n");

  // Get and save the number the user types
  scanf("%d", &myNum);

  // Print the number the user typed
  printf("Your number is: %d", myNum);

  return 0;
}
// Create a structure variable and assign values to it
struct myStructure s1 = {13, 'B', "Some text"};

// Create another structure variable
struct myStructure s2;

// Copy s1 values to s2
s2 = s1;

// Change s2 values
s2.myNum = 30;
s2.myLetter = 'C';
strcpy(s2.myString, "Something else");

// Print values
printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
