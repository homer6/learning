#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

/**
 * Generically swaps two variables.
 * Both *a and *b must be size bytes long.
 *
 * @param void *a //the first element to swap
 * @param void *b //the second element to swap
 * @param int size //the size of both elements in bytes *
 */
void swap( void *a, void *b, int size ){
	
	char buffer[size];
	memcpy( buffer, a, size );
	memcpy( a, b, size );
	memcpy( b, buffer, size );		

}

/**
 * Generic linear search function.
 * Will return the address of the first element that matches
 *
 * @param void *search_for //what your looking within the haystack to find
 * @param void *haystack  //the array of haystack_size elements that are element_size bytes long each
 * @param int haystack_size  //the number of elements in haystack
 * @param int element_size  //the size of each element in bytes
 * @return void*
 */
void* linear_search( void *search_for, void *haystack, int haystack_size, int element_size ){
	
	for( int i = 0; i < haystack_size; i++ ){
		void *elemAddr = (char*)haystack + i * element_size;
		if( memcmp( search_for, elemAddr, element_size ) == 0 ){
			return elemAddr;
		}
	}
	return NULL;
}


/**
 * This program demonstrates the usage of the above swap and linear_search functions. 
 *
 */
int main(){
	
	//swap 
		int x = 17, y = 37;

		swap( &x, &y, sizeof(int) );
			
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;


		char *husband = strdup("Fred");
		char *wife = strdup("Wilma");

		cout << "Husband: " << husband << endl;

		swap( &husband, &wife, sizeof(char*) );

		cout << "Husband: " << husband << endl;

		cout << "char* size: " << sizeof(char*) <<endl;
		cout << "char size: " << sizeof(char) <<endl;

	return 0;

}

