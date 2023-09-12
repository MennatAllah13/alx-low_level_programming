#include "main.h"

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = 65 + (str[i] - 97);
		i++;
	}
	return (str);
}
