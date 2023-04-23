#include <stdio.h>
#include <string.h>
#include <stding.h>

char *mystrstr( const char *str1, const char *str2 )
{
	if( (str1 == NULL) || (str2 == NULL) ) return NULL;

	for( size_t i = 0 ; i < strlen( str1 ) ; i++ ) 
	{
		if( str1[i] == str2[0] )
		{
			for( size_t j = 1 ; j < strlen( str2 ) ; j++ ) 
			{
					if( str2[j] != str1[i+1] )
					{
						break;
					}
					else
					{
						return (char *)&str1[i];
					}
			}
		}
	}
	return NULL;
}

