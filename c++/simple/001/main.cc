
//source: http://www.cplusplus.com/forum/beginner/1665/

#include <iostream>

using namespace std;

//function prototypes
void encrypt( char string[] );
void decrypt( char *string );


int main(){

	char string[] = "This is a secret!";
	cout << "Original string is: " << string << endl;

	encrypt( string );
	cout << "Encrypted string is: " << string << endl;

	decrypt( string );
	cout << "Descrypted string is: " << string << endl;

	return 0;

}


void encrypt( char string[] ){
	
	for( int i = 0; string[i] != '\0'; ++i ){
		(string[i])++;
	}

}

void decrypt( char *string ){

	for( int i = 0; string[i] != '\0'; ++i ){
		(string[i])--;
	}
	
}


