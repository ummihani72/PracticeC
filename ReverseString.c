#include <stdio.h>

int main()
{
	char string[] = "thalesDISSingapore";
	int ii = 0;
	int length = 0;
	char* p1, * p2;
	char temp;

	while (string[ii] != '\0')
	{
		length++;
		ii++;
	}

	p1 = string;
	p2 = string + length - 1;

	while (p1 < p2)
	{
		temp = *p1;
		*p1++ = *p2;
		*p2-- = temp;
	}
	printf("%s", string);
	
	return 0;
}