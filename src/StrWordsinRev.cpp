/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

char *stringrev(char *str, int len)
{
	int i;
	char t;
	len--;
	for (i = 0; i <= len; i++, len--)
	{
		t = str[i];
		str[i] = str[len];
		str[len] = t;
	}
	return str;
}
void str_words_in_rev(char *input, int len)
{
	int i, start;
	input = stringrev(input, len);
	for (i = 0, start = 0; i <= len; i++)
	{
		if (input[i] == ' ' || input[i] == '\0')
		{
			stringrev(input + start, i - start);
			start = i;
			while (input[start] == ' ')
				start++;
		}
	}
}