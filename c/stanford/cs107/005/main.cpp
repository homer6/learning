#include <cstring>
#include <iostream>
using std::cout;
using std::endl;


/**
 * Generic linear search.
 *
 */
void *linear_search( 
		void *key,
		void *base,
		int n,
		int elemSize,
		int (*cmpfn)( void*, void* )
){

	for( int i = 0; i < n; i++ ){
		void *elemAddr = (char*)base + i * elemSize;
		if( cmpfn( key, elemAddr ) == 0 ){
			return elemAddr;
		}
	}
	return NULL;

}
				
/**
 * Comparison function for integers
 *
 *
 */
int intCmp( void *elem1, void *elem2 ){
	int *ip1 = (int*)elem1;
	int *ip2 = (int*)elem2;
	return *ip1 - *ip2;
}


/**
 * Comparison function for strings
 *
 */
int strCmp( void *elem1, void *elem2 ){
	char *s1 = *(char**)elem1;
	char *s2 = *(char**)elem2;
	return strcmp( s1, s2 );
}


/**
 * Demonstrates a generic linear search
 *
 */
int main(){
	
	
	//Search through an integer array
		int haystack[] = { 4, 2, 3, 7, 11, 6 };
		int size = 6;
		int number = 7;

		int *int_found = (int*)linear_search( &number, haystack, size, sizeof(int), intCmp );

		if( int_found == NULL ){
			cout << "Not Found." << endl;
		}else{
			cout << "Found." << endl;
		}

	//Search through a string array
		const char *notes[] = { "Ab", "F#", "B", "Gb", "D" };
		const char *favourite_note = "Gb";

		char **char_found = (char**)linear_search( &favourite_note, notes, 5, sizeof(char*), strCmp );	
		if( char_found == NULL ){
			cout << "Not Found." << endl;
		}else{
			cout << "Found." << endl;
		}
	
	return 0;
}
