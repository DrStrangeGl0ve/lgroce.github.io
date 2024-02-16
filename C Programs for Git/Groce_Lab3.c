#include <stdio.h>
#include <stdlib.h>
// Declaring array of 7 items.
int valueCollection[7];
// Declaring variable to be searched.
int searchedValue;
// Declaring the length of the array.
int arraySize = 7;
// Creating a value that switches to indicate if a match has been found.
int containsValue = 0;
// Declaring a function to search the array for a user value.
int FindValue();

int main() {

  // Filling the array with values. Each time the loop runs,
  // the index position is multiplied by 5, added to the array,
  // and incremented to the next index.
  // When it reaches the maximum array length, the loop ends.
  for (int i = 0; i < arraySize; i++) {
    valueCollection[i] = i * 5;
  }

  // Running the function to search the array.
  FindValue();
  return 0;
}

// Initializing search function;
int FindValue() {
  // Prompting user to give us a value to search.
  printf("Type a number to find in the array: \n");
  scanf("%i", &searchedValue);
  // Looping through the array to find a match. If we find a match, we break the
  // loop, toggle our containsValue switch, and print the resulting index
  // position.
  for (int i = 0; i < arraySize; i++) {
    if (valueCollection[i] == searchedValue) {
      containsValue = 1;
      printf("I found your value in index %d \n", i);
      break;
    }
  }
  // If we didn't find a value, the containsValue switch doesn't change,
  // and we will print our default message.
  if (containsValue == 0) {
    printf("Your value was not found in this array.\n");
  }
  // Ends function with return value.
  return 0;
}