#include <stdio.h>

/**
 * Create a program to change the value of a variable using a pointer. Here's how the program should work:

Get input value for a double variable salary.
Assign the address of salary to a double pointer.
Now use the pointer to

print the value of salary,
increase the salary by 2 times,
print the new salary.
*/

int main()
{
	double salary;
	double* ptr = &salary;

	printf("Enter your salary: ");
	scanf("%lf", &salary);
	printf("Address of salary is %lf\n", &salary);


	printf("Your salary is: %.3lf\n", *ptr);

	double two_times = salary * 2;

	printf("Your new salary is: %.3lf", two_times);

}

