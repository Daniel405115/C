#include <stdio.h>
#include <string.h>
#include "my_string.h"

const char *mystrrchr( const char *s, int c )
{
	char *ptr = NULL;
	for ( size_t i = strlen(s) - 1 ; i >= 0 ; i-- )
	{
		if( s[i] == c )
		{
			ptr = &s[i];
			return ptr;
		}
	}
	return ptr;
}

