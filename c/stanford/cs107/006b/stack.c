
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
	
	
void StackNew( Stack *s, int element_size ){
	
	assert( element_size > 0 );
	s->logical_length = 0;
	s->element_size = element_size;
	s->allocated_length = 4;	
	s->elements = malloc( 4 * element_size );
	assert( s->elements != NULL );

}

void StackDispose( Stack *s ){
	
	free( s->elements );
	
}

static void StackGrow( Stack *s ){
	
	s->allocated_length *= 2;
	s->elements = realloc( s->elements, s->allocated_length * s->element_size );
	assert( s->elements != NULL );
		
}

	
void StackPush( Stack *s, void* element ){
	
	/*
		Allocate more space, if required.
	*/
	if( s->logical_length == s->allocated_length ){		
		StackGrow( s );	
	}
	
	void *target = (char*)s->elements + s->logical_length * s->element_size;
	memcpy( target, element, s->element_size );
	s->logical_length++;

}
	
void StackPop( Stack *s, void* element ){
	
	assert( s->logical_length > 0 );	
	void *source = (char*)s->elements + ( s->logical_length - 1 ) * s->element_size;	
	memcpy( element, source, s->element_size );
	s->logical_length--;
	
}





