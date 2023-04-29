#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// This is a code that we allocate a int32_t memory and give them a sequence of integer value
int32_t* memory_allocate( size_t, int32_t * );

int32_t* memory_allocate2( size_t, int32_t * );

int main()
{
	int32_t *ptr = NULL;
	size_t size;

	printf( "Enter the size you want to allocate: " );

	scanf( "%lu", &size);

	ptr = memory_allocate( size, ptr ); 

	printf( "the address is %p\n", ptr );

	for( size_t i = 0 ; i < size ; i++ )
	{
		*( ptr + i ) = i;
	}
	for( size_t i = 0 ; i < size ; i++ )
	{
		printf( "%d\n", *( ptr + i ) );
	}

	free( ptr );

	printf( "%d\n", *ptr );
}

int32_t* memory_allocate( size_t size, int32_t *ptr )
{
	ptr = malloc( size*sizeof( int32_t ) );

	memset( ptr, 0, size*sizeof( int32_t ) );
	
	return ptr;
}

int32_t* memory_allocate2( size_t size, int32_t *ptr )
{
	ptr = calloc( size, sizeof( int32_t ) ); 

	return ptr;
}
