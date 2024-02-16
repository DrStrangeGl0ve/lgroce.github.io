#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  // Declaring variables for all mpg calculations.
  float gallonsUsed;
  float milesDriven;
  float milesPerGallon;
  float combinedMilesPerGallon = 0;
  float totalMeasuredTanks = 0;
  float averageMilesPerGallon;

  /*This time, I've removed one of the if-statements and removed the else
  statement entirely. I couldn't figure out a way to remove all of the
  if-statements completely, but I've cut it down to one. The
  averageMilesPerGallon is sitting outside of the while loop, and the program
  accepts unlimited vehicles to check.
*/

  // Creating a while loop to calculate and store individual milesPerGallon
  // until -1 is entered.
  printf("Enter the gallons used (-1 to end): \n");
  scanf("%f", &gallonsUsed);

  while (gallonsUsed != -1) {

    printf("Enter the miles driven: \n");
    scanf("%f", &milesDriven);
    milesPerGallon = milesDriven / gallonsUsed;
    printf("The miles/gallon for this tank was %.2f \n", milesPerGallon);
    combinedMilesPerGallon += milesPerGallon;
    totalMeasuredTanks++;

    // include sentinel checker at END of while loop.
    printf("Enter the gallons used (-1 to end): \n");
    scanf("%f", &gallonsUsed);
  }

  // Calculating and outputting the total average miles per gallon for all cars.
  averageMilesPerGallon = combinedMilesPerGallon / totalMeasuredTanks;
  printf("Average miles-per-gallon for all tanks is %.2f \n",
         averageMilesPerGallon);
  return 0;
  system("pause");
}
