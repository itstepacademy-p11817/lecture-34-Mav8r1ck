#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>

int primes_number(int num, ...)
{
	va_list valist;
	va_start(valist, num);
	int quantity = 0;
	for (int i = 0; i < num; i++)
	{
		int counter = 0;
		int temp = va_arg(valist, int);
		for (int j = 1; j <= temp; j++)
		{
			if (temp % j == 0)
			{
				counter++;
			}
		}
		if (counter == 2)
		{
			quantity++;
		}
	}
	return quantity;
}

int main()
{
	printf("Primes quantity = %d\n", primes_number(9, 1, 2, 3, 4, 5, 6, 7, 8, 9));
	system("pause");
	return 0;
}