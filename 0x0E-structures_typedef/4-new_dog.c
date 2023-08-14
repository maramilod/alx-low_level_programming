#include "dog.h"
/**
 * _strlen - function
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		i++;
	return (i);
}
/**
 * *_memcpy - function copies n bytes from memory area src
 *
 * @dest: array 1
 * @src: array 2
 * @n: num of ti
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - function
 * @name: string
 * @age: nume
 * @owner: string
 * Return: null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o;
	dog_t *p;

	n = _strlen(name);
	o = _strlen(owner);
	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(char) * (n + o));

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (o + n));

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	_memcpy(p->name, name, n);
	_memcpy(p->owner, owner, o);
	p->age = age;

	return (p);
}
