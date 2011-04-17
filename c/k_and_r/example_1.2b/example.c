


#include <stdio.h>

/*
	Prints a fahrenheit to celcius table.


*/

main(){

	float fahrenheit, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 120;
	step = 10;
	
	fahrenheit = lower;
	printf( "Fahrenheit\tCelcius\n" );
	while( fahrenheit <= upper ){
		celcius = 5 * (fahrenheit-32) / 9;
		printf( "%3.0f\t%6.1f\n", fahrenheit, celcius );
	    fahrenheit += step;	
	}
	

}

