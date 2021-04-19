CXX=g++
CXXFLAGS = -Wall -g -std=c++11

# Put object files in next line
H = Headers/
Headers = $(H)Helper.h $(H)Board.h $(H)Move.h $(H)PieceMask.h $(H)Movement.h
OBJS = $(Headers) Main.o



main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -g -o testmain



#your object file targets below here...
Main.o: Source/Main.cpp
	$(CXX) $(CXXFLAGS) -c Source/Main.cpp



clean:
	rm -f *.o testmain
