#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int w_length(char *str);
int wrd_count(char *str);

/**
 * w_length - length of words
 * @str: string to search
 * Return: 0
 */

int w_length(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * wrd_count - count num of words in string
 * @str: string to search
 * Return: 0
 */
int wrd_count(char *str)
{
	int i = 0, words = 0, length = 0;

	for (i = 0; *(str + i); i++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += w_length(str + i);
		}
	}
	return (words);
}
/**
 * strtow - function that splits a string into words
 * @str: string to be split
 * Return: 0
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = wrd_count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = w_length(str + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
