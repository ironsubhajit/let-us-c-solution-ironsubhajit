/*
A 5-digit positive integer number entered through the keyboard and
non-recursive function to calculate sum of digits
*/

#include<stdio.h>
int sum_of_digits(int num);
int main()
{	
	int number;	
	printf("\nEnter 5-Digit number: ");
	scanf("%d", &number);
	int result = sum_of_digits(number);
	printf("\n%d - Sum of all digits is: %d\n", number, result);
	return 0;	
}

int sum_of_digits(int num)
{
	int sum=0;
	while(num > 0)
	{
		sum += (num%10);
		num = (num/10);
	}
	return sum;
}
