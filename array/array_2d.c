#include <stdio.h>
#include <stdint.h>

void printArray( const int32_t [][3], size_t );

int main()
{
   int32_t  array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } },
            array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 },
            array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

   printf( "Values in array1 by row are:\n" );
   printArray( array1, 2 );

   printf( "Values in array2 by row are:\n" );
   printArray( array2, 2 );

   printf( "Values in array3 by row are:\n" );
   printArray( array3, 2 );

   return 0;
}

void printArray( const int32_t a[][3], size_t row )
{
   for ( size_t i = 0; i < row; i++ )
   {
        for ( size_t j = 0; j < 3; j++ )
        {
            printf( "%d ", a[ i ][ j ] );
        }
        printf( "\n" );
   }
}

