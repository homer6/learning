 
#ifndef STACK_H
#define STACK_H
 
 
	 typedef struct{
		void *elements;
		int element_size;
		int logical_length;
		int allocated_length;
	} Stack;

	void StackNew( Stack *s, int element_size );
	void StackDispose( Stack *s );
	
	void StackPush( Stack *s, void* element );
	void StackPop( Stack *s, void* element );

	
#endif