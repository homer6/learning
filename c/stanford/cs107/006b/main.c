#include "stack.h"
#include <stdio.h>


int main(){

	Stack stack;
	
	StackNew( &stack, sizeof(int) );
	
	int insert = 0;
	int x;
	for( x = 0; x < 1000; x++ ){
		insert = x;
		StackPush( &stack, &insert );
	}

	printf( "Stack Size: %i\n", stack.logical_length );

	int temp = 0;
	for( x = 0; x < 500; x++ ){
		StackPop( &stack, &temp );
	}
		
	printf( "Stack Size: %i\n", stack.logical_length );
	
	StackDispose( &stack );
	
	return 0;
	
}
