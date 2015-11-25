/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


char *stringreverse(char *str, int len)
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
void number_to_str(float number, char *str,int afterdecimal)
{
	int index = 0, i, factor = 1;
	int intpart;
	if (number < 0)
	{
		str[index] = '-';
		index++;
		number = -number;
	}
	intpart = number;
	number = number - intpart*1.0;
	while (intpart)
	{
		str[index] = (intpart % 10) + '0';
		intpart /= 10;
		index++;
	}
	if (str[0] == '-')
		stringreverse(str + 1, index-1);
	else
		stringreverse(str, index);
	if (afterdecimal)
	{
		str[index] = '.';
		index++;
		while (afterdecimal)
		{
			intpart = number * 10;
			str[index] = (intpart % 10) + '0';
			index++;
			afterdecimal--;
			number *= 10;
		}
	}
	str[index] = '\0';
}