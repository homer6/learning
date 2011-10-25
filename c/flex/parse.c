
#include <stdio.h>
//#include <stdlib.h>

extern FILE *yyin, *yyout;

int main( int argc, char **argv ){

    ++argv, --argc;  /* skip over program name */
   
    if( argc > 0 ){        
        yyin = fopen( argv[0], "r" );
        yylex();
        fclose( yyin );
        return 0;
    }else{
        printf( "%s \n", "Please supply a file to parse." );
        return 1;
    }
        
}
