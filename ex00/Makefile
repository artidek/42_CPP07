G = g++
GFLAGS = -g -std=c++98 -Wall -Wextra -Werror

NAME = template

all: $(NAME)

$(NAME):
	$(G) $(GFLAGS) main.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
