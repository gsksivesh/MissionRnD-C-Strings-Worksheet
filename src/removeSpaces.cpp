/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
char removeSpaces(char *str)
{
	int i, index = 0;
	if (str == NULL || str == '\0')
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[index] != ' ')
		{
			index = i;
		}
		else if (index != 0 && str[i] != ' ')
		{
			str[index] = str[i];
			str[i] = ' ';
			index++;
		}
	}
	if (index == 0)
		return str[0];
	str[index] = '\0';
	return str[0];
}