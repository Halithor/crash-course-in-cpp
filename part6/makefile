# This entire file was not built from memory, but based on this website: 
#	https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html
# More info to be found there.

# This is the compiler command we're using. If we were instead programming in another lanuage (say C), we would use 
# that compiler (gcc).
CC = g++

# compiler flags:
#   -g      adds debugging info to the executable.
#   -Wall   turns on most, but not all, compiler warnings.
CFLAGS = -g -Wall -std=c++11

SRCS = Item.cpp ItemLinkedList.cpp
OBJS = $(SRCS:.c=.o)

# This first item in a makefile is always run. In this case, we just call the 'program' direction.
all: program

# Making the program. We need items and the item linked list.
program: main.cpp $(OBJS)
	$(CC) $(CFLAGS) -o program main.cpp $(OBJS)

# Here's what we need to make Item. And the command to make the Item.
Item.o: Item.hpp Item.cpp
	$(CC) $(CFLAGS) -c Item.cpp

ItemLinkedList.o: Item.hpp ItemLinkedList.hpp ItemLinkedList.cpp
	$(CC) $(CFLAGS) -c ItemLinkedList.cpp

# This command is a utility command that nearly every project you work on will have. All it does is it removes the 
# executable (program.*), the object files (*.o), and the temporary files (*~). Calling this leaves you with only
# your source code, and removes all compile work that has already been done.
clean: 
	rm -f program.* *.o *~