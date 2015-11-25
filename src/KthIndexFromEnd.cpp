/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

#include<stdio.h>
char KthIndexFromEnd(char *str, int K)
{
	int i;
	if (K < 0 || str == NULL || str[0] == '\0')
	{
		return '\0';
	}
	for (i = 0; str[i] != '\0'; i++);
	if (i - K - 1 < 0)
	{
		return '\0';
	}
	return str[i - K - 1];
}