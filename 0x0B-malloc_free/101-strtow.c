#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - ildshf hsdzfi fdgkndofi
 * @str: idskj ioisdhicxv
 * Return: words
*/
char **strtow(char *str)
{
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
int wordCount = 1;
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
wordCount++;
while (str[i] == ' ')
{
i++;
}
}
}
char **words = (char **)malloc((wordCount + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
char *token = strtok(str, " ");
int wordIndex = 0;
while (token != NULL)
{
words[wordIndex] = (char *)malloc(strlen(token) + 1);
if (words[wordIndex] == NULL)
{
for (int i = 0; i < wordIndex; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
strcpy(words[wordIndex], token);
wordIndex++;
token = strtok(NULL, " ");
}
words[wordCount] = NULL;
return (words);
}
