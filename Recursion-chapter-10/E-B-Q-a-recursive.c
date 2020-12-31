/*
A 5-digit positive integer number entered through the keyboard and
recursive function to calculate sum of digits
*/

#include<stdio.h>
int sum_of_digits(int);
int main()
{
	int number;
	printf("\nEnter 5-Digit Number: ");
	scanf("%d",&number);
	int sum = sum_of_digits(number);
	printf("\n%d - sum of all digits: %d\n", number, sum);
	return 0;
}

int sum_of_digits(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return ((num % 10) + sum_of_digits(num / 10));
	}
}
