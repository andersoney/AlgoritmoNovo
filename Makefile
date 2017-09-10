CXX = g++
CXXFLAGS = -g -Wall `pkg-config --cflags stage`  -fPIC
LINKFLAGS = `pkg-config --libs stage` 

COMMON_DIR = ../common

run: all

all: coordination.so createScenario

createScenario: createScenario.cpp
	$(CXX) createScenario.cpp -o createScenario

coordination.so: ControllerPrincipal.o main.o Connection
	$(CXX) $(CXXFLAGS) $(LINKFLAGS) main.o ControllerPrincipal.o Connection.o -o coordination.so -shared

ControllerPrincipal.o: ControllerPrincipal.cpp ControllerPrincipal.h
	$(CXX) $(CXXFLAGS) $(LINKFLAGS) -c ControllerPrincipal.cpp

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $(LINKFLAGS) -c main.cpp

Connection.o: Connection.cpp Connection.h
	$(CXX) $(CXXFLAGS) $(LINKFLAGS) -c -Wall Connection.cpp


clean:
	@rm -f *.o *.so  server createScenario
	
reset:
	rm -rf nRobos*

