
#ifndef HTTP_REQUEST_H
#define HTTP_REQUEST_H

#include <string>

class HttpRequest{

    protected:
        std::string url;

    public:
        HttpRequest();
        void setUrl( std::string new_url );
        std::string getUrl();
        void send();






};








#endif