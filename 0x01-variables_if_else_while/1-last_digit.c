#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * 
 * Description: Takes a random number and returns the last
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("The Last digit of %d is %d and is greater than 5\n", lastNum);
	else if (lastNum == 0)
		printf("The last digit of %d is %d and is 0\n", lastNUm);
	else if (lastNum != 0 && lastNum < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", lastNUm);
	return (0);
}