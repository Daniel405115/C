#include <stdio.h>
#include <stdint.h>

void print_array( int32_t b[], size_t size );
void sort_array( int32_t b[], size_t size, int32_t ( *compare )( int32_t, int32_t));
int32_t ascend( int32_t, int32_t );
int32_t descend( int32_t, int32_t );

int main()
{
    int32_t num[5] = {0};

    printf( "Please enter Five numbers:");

    scanf( "%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4] );

    print_array( num, 5 );

    sort_array( num, 5, ascend );
    print_array( num, 5 );

    sort_array( num, 5, descend );
    print_array( num, 5 );

}

void print_array( int32_t b[], size_t size )
{
    for( int32_t i = 0; i < size; i++ )
    {
        printf( "%d ", b[i] );
    }
    printf("\n");
}

void sort_array( int32_t b[], size_t size, int32_t ( *compare )( int32_t a, int32_t b ) )
{
    for( int32_t i = 0 ; i < size - 1 ; i++ )
    {
        for( int32_t j = i + 1 ; j < size ; j++)
        {
            if( compare( b[i], b[j] ) )
            {
                int32_t temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

int32_t ascend( int32_t a, int32_t b )
{
    return b > a;
}

int32_t descend( int32_t a, int32_t b )
{
    return b < a;
}








