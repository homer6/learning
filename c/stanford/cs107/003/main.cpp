
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;


/**
 * Prints to the screen, a binary representation of the value passed.
 *
 * @return void
 */
template <class Type>
void showBits( Type value ){
	
	cout << endl << value << ": ";

	int new_value = *(int*)&value;

	const int SHIFT = 8 * sizeof( int ) - 1;
	const int MASK = 1 << SHIFT;

	for( int i = 1; i <= SHIFT + 1; i++ ){
		cout << ( new_value & MASK ? '1' : '0' );
		new_value <<= 1;
	    if ( i % 8 == 0 ){
			cout << ' ';
		}
	}
	cout << endl;

}


struct fraction{
	int num;
	int denom;
};

struct student{
	char* name;
	char suid[8];
	int numberUnits;
};


/**
 * Main Function
 *
 */
int main(){

    //char ch = 'A';
    unsigned unsigned_number = 37;
	float f = unsigned_number;

 	showBits( unsigned_number );
 	showBits( f );

	fraction pi;

	int array[10];

	student pupils[4];


    return 0;


}
