#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - this returns the length of a string
 * @s: this represents string to evaluate
 *
 * Return: this returns the length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - this copies the string pointed to by src
 * and also including the terminating null byte (\0)
 * to the buffer pointed to by destination
 * @dest: this represents a pointer to the buffer in which we copy the string
 * @src: this represents a string to be copied
 *
 * Return: this return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - this creates a new dog
 * @name: this represents the name of the dog
 * @age: this represents the age of the dog
 * @owner: this represents the owner of the dog
 *
 * Return: this represents the pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
