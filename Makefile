CFLAGS = -O -g -std=c++23
SRCS = src/main.c 
OBJS = $(SRCS:.c=.o)

planner: main.o
	g++ $(SRCS) $(CFLAGS) -o $@

clean:
	rm -f $(OBJS)
