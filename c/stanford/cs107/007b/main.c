#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void rotate( void *front, void *middle, void *end ){
	int front_size = (char*)middle - (char*)front;
	int back_size = (char*)end - (char*)middle;
	char buffer[front_size];
	memcpy( buffer, front, front_size );
	memmove( front, middle, back_size );
	memcpy( (char*)end - front_size, buffer, front_size );
}


void qsort( void *base, int size, int element_size, int (*compare_function)(void*, void*) ){
	
	/** Type man qsort **/

}


int main(){

	const char *friends[] = { "Al", "Bob", "Carl" };
	Stack stack;
	
	StackNew( &stack, sizeof(char*), &StringFree );
	
	int x;
	for( x = 0; x < 3; x++ ){
		char *copy = strdup( friends[x] );
		StackPush( &stack, &copy );
	}

	printf( "Stack Size: %i\n", stack.logical_length );
	
	char *name = "";
	for( x = 0; x < 3; x++ ){
		StackPop( &stack, &name );
		printf( "%s\n", name );
		free(name);
	}
		
	printf( "Stack Size: %i\n", stack.logical_length );
	
	StackDispose( &stack );
	
	return 0;
	
}
