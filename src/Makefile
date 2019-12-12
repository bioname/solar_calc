src = $(wildcard *.cpp)
obj = $(src:.cpp=.o)
CC = g++ -std=gnu++1z
LDFLAGS = -lGL -lglut -lpng -lz -lm

myprog: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) myprog
