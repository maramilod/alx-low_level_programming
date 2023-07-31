#include "main.h"
/**
 * *_strstr -  function that locates a substring
 *
 * @haystack: array
 * @needle: array
 *
 * Return: s or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int i = 0;
	char m[];

	while (haystack[i])
	{
		if (haystack[i] == needle[i])
		{
			m[j] = haystack[i];
			j++;
		}
		i++;
	}
	return (m[j]);
}
