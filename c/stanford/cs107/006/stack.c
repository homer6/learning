
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
	
void StackNew( Stack *s ){
	
	s->logical_length = 0;
	
	s->allocated_length = 4;
	
	s->elems = malloc( 4 * sizeof(int) );
	assert( s->elems != NULL );
	

}


void StackDispose( Stack *s ){
	
	free( s->elems );
	
}

	
void StackPush( Stack *s, int value ){
	
	/*
		Allocate more space, if required.
	*/
	if( s->logical_length == s->allocated_length ){
		
		s->allocated_length *= 2;
		s->elems = realloc( s->elems, s->allocated_length * sizeof(int) );
		assert( s->elems != NULL );
	
	}
	
	s->elems[ s->logical_length ] = value;
	s->logical_length++;

}
	
int StackPop( Stack *s ){
	
	assert( s->logical_length > 0 );
	s->logical_length--;
	return s->elems[ s->logical_length ];	

}





