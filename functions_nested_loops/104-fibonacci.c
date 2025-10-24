#include <stdio.h>

/**
 * print_first_fibonacci - Affiche le premier nombre de Fibonacci
 */
void print_first_fibonacci(void)
{
	printf("Premier Fibonacci : 1\n");
}

/**
 * print_last_fibonacci - Affiche le dernier nombre de Fibonacci <= 1000
 * @a: premier terme
 * @b: deuxième terme
 */
void print_last_fibonacci(int a, int b)
{
	int next;

	while (b <= 1000)
	{
		next = a + b;
		a = b;
		b = next;
	}
	printf("Dernier Fibonacci <= 1000 : %d\n", a);
}

/**
 * main - Point d'entrée
 * Return: Always 0
 */
int main(void)
{
	print_first_fibonacci();
	print_last_fibonacci(1, 2);
	return (0);
}
