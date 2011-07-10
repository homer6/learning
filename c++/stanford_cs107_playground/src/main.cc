#ifdef HAVE_CONFIG_H
    #include <config.h>
#endif

#include "lecture_2.h"
#include "altumo/date.h"
#include <iostream.h>

using std::cout;

main(){

    Lecture2 lecture2;
    lecture2.run();

    Altumo::Date date;
    cout << date.format( "m-d-Y" );

}
