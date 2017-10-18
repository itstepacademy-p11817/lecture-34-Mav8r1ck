#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>

void some_numbers(int num, ...)
{
	va_list valist;
	va_start(valist, num);
	int even = 0;
	int odd = 0;
	for (int i = 0; i < num; i++)
	{
		int temp = va_arg(valist, int);
			if (temp % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
	}
	if (even > odd)
	{
		printf("More even");
	}
	else
	{
		printf("More odd");
	}

}

int main()
{
	some_numbers(9, 1, 2, 3, 4, 5, 6, 7, 8, 9);
	system("pause");
	return 0;
}