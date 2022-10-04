#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - a function that concatenates two strings
* @s1: input
* @s2: input
* Return: concat of str1 and str2
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ti;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ti = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		ti++;
	concat = malloc(sizeof(char) * (i + ti + 1));

	if (concat == NULL)
		return (NULL);
	i = ti = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ti] != '\0')
	{
		concat[i] = s2[i];
		i++, ti++;
	}
	concat[i] = '\0';
	return (concat);
}
