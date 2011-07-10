#ifndef ALTUMO_DATE_H
#define ALTUMO_DATE_H

    namespace Altumo{

        class Date{

            public:
                Date();

                enum Weekday{
                    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
                };
                enum Month{
                    January, February, March, April, May, June, July, August, September, October, November, December
                };

                string Date::format( const string format );


            protected:
                unsigned day_of_week:3;
                unsigned day_of_month:5;
                unsigned month:4;
                signed year:8;

                void calculateLeapYear();



            private:
                bool leap_year;



                static const char *month_full_names[] = {
                        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
                };
                static const char *month_short_names[] = {
                        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
                };

                static const char *weekday_full_names[] = {
                        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
                };
                static const char *weekday_short_names[] = {
                        "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
                };

        };




    }

#endif
