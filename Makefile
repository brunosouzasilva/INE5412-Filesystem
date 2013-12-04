CFLAGS = -c -Wall
CC = g++

SOURCES = src/main.cpp src/simulatedDisk.cpp src/ine5412-filesystem.cpp src/fileSystemAPI.cpp src/diskBlock.cpp

OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = filesystem

TEST_CFLAGS = -ggdb

TEST = a.out
TEST_SOURCES = test_1/bitmap.cpp
TEST_OBJS = $(TEST_SOURCES:.cpp=.o)

.PHONY: all clean

all: $(CC) $(TEST)
     @echo Test!

$(SOURCES) $(EXECUTABLE)

$(BIN): $(OBJS)
        $(CC) -o $(BIN) $(OBJECTS)

$(TEST): $(TEST_OBJS) $(BIN) test/root/dir3/remove.txt
         $(CC) -o $(TEST) $(TEST_OBJECTS)

$(EXECUTABLE): $(OBJECTS)
  $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
        $(CC) $(CFLAGS) $< -o $@

./src/%.o: ./src/%.cpp
        $(CC) -c -o $@ $< $(CFLAGS)

./test_1/%.o: ./test_1/%.cpp
        $(CC) -c -o $@ $< $(TEST_CFLAGS)

clean: rm -f $(OBJECTS)
       rm -f $(BIN)
       rm -f $(TEST_OBJS)
       rm -f $(TEST)
