
#include "HttpRequest.h"
#include <iostream>


HttpRequest::HttpRequest(){

    this->setUrl( std::string("http://home.ssperandeo.dev.jobboard.waterfrontinnovations.com/test2.php") );

}

std::string HttpRequest::getUrl(){

    return url;

}

void HttpRequest::setUrl( std::string new_url ){

    url = new_url;

}

void HttpRequest::send(){
	
    using namespace std;

    cout << "Url: " << this->getUrl() << endl;

}