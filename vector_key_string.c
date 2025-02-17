#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct KeyValue {
	char *key;
	int value;
};

struct Vector {
	struct KeyValue *data;
	int size;
};

struct KeyValue *new_key_value( const char *key, int value ) {
	struct KeyValue *kv = malloc(sizeof(struct KeyValue));
	kv->key = strdup(key);
	kv->value = value;
	return kv;
}

struct Vector *new_vector(void) {
	struct Vector *v = malloc(sizeof(struct Vector));
	v->data = NULL;
	v->size = 0;
	return v;
}

void vector_add(struct Vector *v, struct KeyValue *kv) {
	v->data = realloc(v->data, sizeof(struct KeyValue) * (v->size + 1));
	v->data[v->size] = *kv;
	v->size++;
}

void vector_print(struct Vector *v) {
	for (int i = 0; i < v->size; i++) {
		printf("%s: %d\n", v->data[i].key, v->data[i].value);
	}
}

int main(void) {

	struct Vector *v = new_vector();

	vector_add( v, new_key_value("key1", 1) );
	vector_add( v, new_key_value("key2", 2) );
	vector_add( v, new_key_value("key3", 3) );

	vector_print(v);

	for (int i = 0; i < v->size; i++) {
		free(v->data[i].key);
	}
	free(v->data);
	free(v);

	return 0;
}