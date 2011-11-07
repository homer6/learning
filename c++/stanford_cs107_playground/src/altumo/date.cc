#include "date.h"
#include "time.h"
#include <iostream>
#include <stdio.h>
#include <string>


using namespace Altumo;
using std::cout;
using std::string;

Date::Date(){

    time_t unix_timestamp;
    unix_timestamp = time(NULL);

    printf( "%ld hours since January 1, 1970", unix_timestamp/3600 );


    day_of_week = Sunday;
    year = unix_timestamp / 31536000 + 1970;

    bool leap_year;
    if( year % 400 == 0 ){
        leap_year = true;
    }else if( year % 100 == 0 ){
        leap_year = false;
    }else if( year % 100 == 0 ){
        leap_year = true;
    }else{
        leap_year = false;
    }





    int seconds_in_this_year = unix_timestamp - year;
    int day_of_year = seconds_in_this_year / 86400;

    unsigned short month_boundaries[11];
    if( leap_year ){
        month_boundaries[ January ] = 31;
        month_boundaries[ February ] = 60;
        month_boundaries[ March ] = 91;
        month_boundaries[ April ] = 121;
        month_boundaries[ May ] = 152;
        month_boundaries[ June ] = 182;
        month_boundaries[ July ] = 213;
        month_boundaries[ August ] = 244;
        month_boundaries[ September ] = 274;
        month_boundaries[ October ] = 305;
        month_boundaries[ November ] = 335;
    }else{
        month_boundaries[ January ] = 31;
        month_boundaries[ February ] = 59;
        month_boundaries[ March ] = 90;
        month_boundaries[ April ] = 120;
        month_boundaries[ May ] = 151;
        month_boundaries[ June ] = 181;
        month_boundaries[ July ] = 212;
        month_boundaries[ August ] = 243;
        month_boundaries[ September ] = 273;
        month_boundaries[ October ] = 304;
        month_boundaries[ November ] = 334;
    }






    month = unix_timestamp - year ;




    // 60 minute
    // 3600 hour
    // 86400 day
    // 31536000 year ( 86400 * 365 )

}



string Date::format( const string format = "y-m-d" ){

    string output = "";
    size_t format_length = format.length();

    string::iterator iterator;
    for( iterator = format.begin(); iterator != format_length.end(); iterator++ ){

        switch( ){
            case 'y':
                    output +=
                break;

            default:
                output += *iterator;


        }

    }

    return output;

}



void Date::calculateLeapYear(){



}

