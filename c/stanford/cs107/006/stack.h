 
#ifndef STACK_H
#define STACK_H
 
 
	 typedef struct{
		int *elems;
		int logical_length;
		int allocated_length;
	} Stack;

	void StackNew( Stack *s );
	void StackDispose( Stack *s );

	void StackPush( Stack *s, int value );
	int StackPop( Stack *s );

	
#endif