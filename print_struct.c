#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct {
	const char* key;
	const char* value;
} obj;

#define INIT_LIST( a,b ) { .key = a, .value = b }

void print_struct( obj *array ){

	for ( int i = 0; i < 3; i++ ) {
		printf("%s\n", array[i].key);
		if( array[i].value == "0" || atoi( array[i].value ) != 0 ){
			int num = atoi( array[i].value );
			printf("%d\n", (num * 100)+5 );
		}
		else
		printf("%s\n", array[i].value);
		printf("\n");
	}

}

int main() {

	// strcmp
	// strcpy

	obj list[] = {
		INIT_LIST( "name", "charles" ),
		INIT_LIST( "size", "0" ),
		INIT_LIST( "capacity", "5" )
	};

	print_struct( list );

	return 0;

}
