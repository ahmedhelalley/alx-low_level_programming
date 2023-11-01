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
int wordCount = 1;
int i;
char **words;
char *token;
int wordIndex = 0;

if (str == NULL || str[0] == '\0')
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
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
words = (char **)malloc((wordCount + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
token = strtok(str, " ");
while (token != NULL)
{
words[wordIndex] = (char *)malloc(strlen(token) + 1);
if (words[wordIndex] == NULL)
{
for (i = 0; i < wordIndex; i++)
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
