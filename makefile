CXX=g++
CXXFLAGS = -Wall -g -std=c++11

# Put object files in next line
H = Headers/
S = Source/
#Headers = $(H)Defines.h $(H)PieceMask.h $(H)Move.h $(H)Board.h
OBJS = Defines.o PieceMask.o Move.o Board.o



main: $(OBJS) Main.o
	$(CXX) $(CXXFLAGS) Main.o -g -o testmain



#your object file targets below here...
Main.o: $(S)Main.cpp
	$(CXX) $(CXXFLAGS) -c $(S)Main.cpp

Board.o: $(S)Board.cpp $(H)Board.h
	$(CXX) $(CXXFLAGS) -c $(S)Board.cpp

Move.o: $(H)Move.h
	$(CXX) $(CXXFLAGS) -c $(H)Move.h

PieceMask.o: $(H)PieceMask.h
	$(CXX) $(CXXFLAGS) -c $(H)PieceMask.h

Defines.o: $(H)Defines.h
	$(CXX) $(CXXFLAGS) -c $(H)Defines.h


clean:
	rm -f *.o testmain
