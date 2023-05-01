#include <stdio.h>
#include <stdint.h>

int main()
{

	int arr[5] = { 3, 5, 1, 8, 6 };

\\this is Bubble sort code

	for( int i = 0 ; i < size - 1 ; i++ )
	{
		for( int j = i ; j < size ; j++ )
		{
			if( arr[i] > arr[j] )	
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
	}
	for( int i = 0 ; i < size  ; i++ )
	{
		printf( "%d\n", arr[i] );
	}
}
