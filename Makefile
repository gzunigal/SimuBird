FILENAME = sources/*.cpp
CC = g++ -std=c++11
COMPILER_FLAGS = -Wall -Iheaders
LINKER_FLAGS = -lGL -lGLEW -lSDL2
OBJS = simubird

all: $(FILENAME)
	$(CC) $(FILENAME) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJS)

clean:
	rm -f $(OBJS) *~
