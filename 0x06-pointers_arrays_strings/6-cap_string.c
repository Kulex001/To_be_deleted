#include "main.h"
/**
 * cap_string - capitalize a sentence
 * @a: string passed
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	int k[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i = 0;
	int j;

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	i++;
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == k[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
				break;
			}
		}
		i++;
	}
	return (str);
}
