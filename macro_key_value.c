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

#define INIT_OBJ( name, v_key, v_value ) obj name = { .key = v_key, .value = v_value }

struct MyStruct {
  int value;
};

#define PRINT_STRUCT_PROPERTY( struct_name, property_name ) printf( "" #struct_name "." #property_name ": %d\n", struct_name.property_name )

int main() {

	// name : "array"
	// size : "0"
	// capacity : "5"

	INIT_OBJ( obj3, "capacity", "5" );
	// obj obj3 = { .key = "capacity", .value = "5" };

	printf( "%s\n", obj3.key );

	struct MyStruct my_struct = {10};
	PRINT_STRUCT_PROPERTY(my_struct, value);

	/*obj list[] = {
		INIT_LIST("key1", "value1"),
		INIT_LIST("key2", "value2"),
		INIT_LIST("key3", "value3")
	};

	for (int i = 0; i < 3; i++) {
		printf("list[%d].key: %s\n", i, list[i].key);
		printf("list[%d].value: %s\n", i, list[i].value);
	}*/

	return 0;
}
