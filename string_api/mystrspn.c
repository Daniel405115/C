#include <stdio.h>
#include <stdint.h>
#include <string.h>
size_t mystrspn( const char *str1, const char *str2 )
{
	size_t counter = 0;
	int8_t flag = 0;
	int32_t len1 = strlen( str1 );
	int32_t len2 = strlen( str2 );


	for( size_t i = 0 ; i < len1 ; i++ )
	{
		for( size_t j = 0 ; j < len2 ; j++ )
		{
			flag = 0;
			if( str1[i] == str2[j] )
			{
				counter++;
				flag = 1;
				break;
			}
		}
		
		if( flag == 0 )
		{
			return counter;
		}
	}
	return counter;
}

