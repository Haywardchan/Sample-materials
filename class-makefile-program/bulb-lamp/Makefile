# Definition of variables
SRCS	= bulb.cpp lamp.cpp lamp-test.cpp
OBJS	= bulb.o lamp.o lamp-test.o

# Rules' Format 
# TARGET: DEPENDENCIES
# [TAB]   COMMAND USED TO CREATE THE TARGET
lamp-test: $(OBJS)
	g++ -o lamp-test $(OBJS)

bulb.o: bulb.cpp
	g++ -c bulb.cpp

lamp.o: lamp.cpp
	g++ -c lamp.cpp

lamp-test.o: lamp-test.cpp
	g++ -c lamp-test.cpp

# makedepend can find the .h dependencies automatically
depend:;	makedepend $(SRCS)

# DO NOT DELETE

bulb.o: bulb.h
lamp.o: lamp.h bulb.h
lamp-test.o: lamp.h bulb.h
