Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@yasshall 
youssef1lam
/
alx-low_level_programming
Public
Fork your own copy of youssef1lam/alx-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x06-pointers_arrays_strings/100-rot13.c
@youssef1lam
youssef1lam 0x06. C - More pointers, arrays and strings
Latest commit 62472ea 4 days ago
 History
 1 contributor
34 lines (33 sloc)  1022 Bytes

#include "main.h"
/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */
char *rot13(char *s)
{
	int stringCount, rotation;
	char r1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z'};
	char r2[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M'};

	for (stringCount = 0; s[stringCount] != '\0'; stringCount++)
	{
		for (rotation = 0; rotation < 53; rotation++)
		{
			if (r1[rotation] == s[stringCount])
			{
				s[stringCount] = r2[rotation];
				break;
			}
		}
	}
	return (s);
}
