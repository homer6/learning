CXX=g++
CXXFLAGS=-ansi -pedantic -Wall -m32
COMPILE=$(CXX) $(CXXFLAGS)
SRC_DIR=src/
CLASSES_DIR=$(SRC_DIR)classes/
BUILD_DIR=build/

# target: all - Compiles application
#all: main.o http_request.o
#	$(COMPILE) -o $(BUILD_DIR)main $(SRC_DIR)main.cpp $(BUILD_DIR)http_request.o

all: main.o
	$(COMPILE) -o $(BUILD_DIR)main $(SRC_DIR)main.cpp 

main.o: 
	#$(COMPILE) -o $(BUILD_DIR)main.o $(SRC_DIR)main.cpp

#http_request.o:
#	$(COMPILE) -c -o $(BUILD_DIR)http_request.o $(CLASSES_DIR)HttpRequest.cpp 
	
# target: main - Compiles application with debug flags
debug:

# target: clean - Removes the compiled objects
clean:
	rm -f $(BUILD_DIR)*
	
# target: all - Shows the available targets
help:
	egrep "^# target:" Makefile
	


