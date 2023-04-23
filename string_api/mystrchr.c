#include <stdio.h>
#include <string.h>
#include "my_string.h"

char *mystrchr( const char *s, int c )
{
	char *ptr = NULL;
	for ( size_t i = 0 ; i < strlen(s) ; i++ )
	{
		if( s[i] == c )
		{
			ptr = &s[i];
			return ptr;
		}
	}
	return ptr;
}


