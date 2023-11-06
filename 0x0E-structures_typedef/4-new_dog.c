#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - jdsh ihdiucvh ishdi sfcv
 * @str: string
 * Return: length of a syrtijng
*/
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * *_strcpy- copire from another string
 * @dest: jdshf jhsdv
 * @src: soutce string
 * Return: destinsatopm
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	src[i] = '\0';
	return (dest);
}
/**
 * *new_dog - new dog dksjfncjsdi
 * @name: name of a dog
 * @age: agr of a fog
 * @owner: owner of a dog
 * Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
