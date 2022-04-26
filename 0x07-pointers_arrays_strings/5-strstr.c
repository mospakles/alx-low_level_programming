#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i + j] != needle[j])
break;

}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (0);
}
