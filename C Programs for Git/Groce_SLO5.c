#include <stdio.h>
#include <stdlib.h>

// Declaring function to calculate payroll for an individual employee.
int employeePayrollInfo();

int main() {
  // Declaring number of employees. Will loop the function while number of
  // Employees is > 0.
  int numberOfEmployees;

  printf("How many employees do you have? \n");
  // Get initial value to determine number of loops.
  scanf("%i", &numberOfEmployees);

  /* Repeatedly call function and decrement number of employees
  until it reaches 0 */

  do {
    employeePayrollInfo();
    numberOfEmployees--;
  } while (numberOfEmployees > 0);

  // Exit main method by returning int 0.
  return 0;
}

// Initializing function to calculate payroll for employee.
int employeePayrollInfo() {
  // Declare local variables for employee data and pay information.
  int employeeIDnumber;
  float hourlyPayRate;
  float weeklyHoursWorked;
  float overtimePayRate;
  float overtimeHours;
  float overTimePay;
  float grossPay;
  float netPay;
  float taxWithheld;
  // Declare constant variable for tax rate.
  const float taxRate = .03525;

  // Request user inputs to initialize variables.
  printf("Please enter employee ID number: \n");
  scanf("%i", &employeeIDnumber);
  printf("Please enter employee hourly pay rate: \n");
  scanf("%f", &hourlyPayRate);
  printf("Please enter the hours this employee worked this week: \n");
  scanf("%f", &weeklyHoursWorked);
  /*Determine if employee worked over 40 hours.
  If so, use the extra hours to calculate pay at 1.5 times the usual pay rate.
  Gross pay can be calculated with or without overtime, depending on the hours
  worked.*/
  if (weeklyHoursWorked > 40) {
    overtimeHours = weeklyHoursWorked - 40;
    overTimePay = hourlyPayRate * 1.5 * overtimeHours;
    grossPay = overTimePay + (hourlyPayRate * 40);
  } else {
    grossPay = hourlyPayRate * weeklyHoursWorked;
  }
  // Multiply gross pay by tax rate to determine taxes to withhold
  taxWithheld = taxRate * grossPay;
  // Net pay is gross pay - tax withheld
  netPay = grossPay - taxWithheld;
  // Prints a summary of the employee's gross pay, tax withholding, and net pay.
  printf("Employee #%i: \n Hours Worked: %.2f \n Gross Pay: $%.2f \n Tax "
         "Withheld: $%.2f \n Net "
         "Pay: $%.2f \n",
         employeeIDnumber, weeklyHoursWorked, grossPay, taxWithheld, netPay);
  // Ends the function by returning int 0.
  return 0;
}
