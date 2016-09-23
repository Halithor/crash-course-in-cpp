# This entire file was not built from memory, but based on this website: 
#	https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html
# More info to be found there.

# This is the compiler command we're using. If we were instead programming in another lanuage (say C), we would use 
# that compiler (gcc).
CC = g++

# compiler flags:
#   -g      adds debugging info to the executable.
#   -Wall   turns on most, but not all, compiler warnings.
CFLAGS = -g -Wall

# This first item in a makefile is always run. In this case, we just call the 'program' direction.
all: program

# The first line is the requirements for this. So basically we're saying "We need 'Dog.o' and 'main.cpp'. If we don't 
# find those files, we can't do anything. Alternatively, we can also check to see if we know how to make those files 
# by looking at our other commands. For example, we know how to make 'Dog.o', as the commands needed to be run are 
# found below.
program: Dog.o main.cpp
	$(CC) $(CFLAGS) -o program main.cpp Dog.o

# Here's what we need to make Dogs. And the command to make the dog.
Dog.o: Dog.hpp Dog.cpp
	$(CC) $(CFLAGS) -c Dog.cpp

# This command is a utility command that nearly every project you work on will have. All it does is it removes the 
# executable (program.*), the object files (*.o), and the temporary files (*~). Calling this leaves you with only
# your source code, and removes all compile work that has already been done.
clean: 
	rm -f program.* *.o *~