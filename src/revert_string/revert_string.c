#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int nextIndex = 0; // contains the index to be altered
	int lastIndex = (int)strlen(str) - 1;
	
	// bubble. Ex: hello -> ohell -> olhhel -> ollhe -> olleh
	while (nextIndex != lastIndex)
	{
		char temp = str[lastIndex];
		
		for (int i = lastIndex; i > nextIndex; i--)
		{
			str[i] = str[i - 1];
		}
		str[nextIndex] = temp;
		nextIndex++;
	}
}

