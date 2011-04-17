#include "stack.h"
#include <stdio.h>


int main(){

	Stack stack;
	
	StackNew( &stack );
	
	StackPush( &stack, 1 );
	StackPush( &stack, 4 );
	StackPush( &stack, 7 );
	StackPush( &stack, 8 );
	
	printf( "Stack Size: %i\n", stack.logical_length );

	StackPop( &stack );
		
	printf( "Stack Size: %i\n", stack.logical_length );
	
	StackDispose( &stack );
	
	return 0;
	
}
