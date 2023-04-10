#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that finds change of an amount with minimum number of coins
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int coins_arr[] = {25, 10, 5, 2, 1};
	int coins = 0;
	int i;
	int amount;

	if (argc == 2)
	{
		amount = atoi(*(argv + 1));
		for (i = 0; i < 5; i++)
		{
			if (amount >= coins_arr[i])
			{
				coins += amount / coins_arr[i];
				amount -= (amount / coins_arr[i]) * coins_arr[i];
			}
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
