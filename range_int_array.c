#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *range( int start, int end ) {
    int n = (end - start + 1 );

    int *rangeArr = malloc( n * sizeof(int) );

    for (int i = 0; i < n; i++) {
        rangeArr[i] = start + i;
    }

    return rangeArr;
}

int main() {

    char *str[] = {"foo", "bar", "bletch"};
    printf("%s\n", str[0] );
 
    int *arr = range(0,9);

    for ( int i=0;i<9+1;i++ )
	printf("%d\n", arr[i] );

    return 0;
}