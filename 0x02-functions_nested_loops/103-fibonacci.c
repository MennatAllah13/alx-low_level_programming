#include <stdio.h>

int main(void)
{
	long int x = 1, y = 2, temp, sum = 0;

	while (y <= 4000000)
	{
		temp = x + y;
		x = y;
		y = temp;
		if (x % 2 == 0)
			sum = sum + x;
	
	}
	printf("%ld\n", sum);
	return (0);
}
