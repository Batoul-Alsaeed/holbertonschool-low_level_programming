#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0, rand_num;
	char password[100];

	srand(time(NULL));

	for (int i = 0; sum < 2772 - 127; i++)
	{
		rand_num = rand() % 94 + 33;
		password[i] = rand_num;
		sum += rand_num;
	}

	password[sum == 2772 ? sum : sum - (sum - 2772)] = '\0';

	printf("%s\n", password);

	return (0);
}
