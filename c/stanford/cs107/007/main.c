#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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
