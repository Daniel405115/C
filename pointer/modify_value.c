#include <stdio.h>
#include <stdint.h>

void modify_value( int32_t *ptr, int32_t new )
{
	*ptr = new;
}

int main()
{
	int32_t a = 0;

	modify_value( &a, 10 );

	printf( "%d\n", a );

}
