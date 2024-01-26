NAME = phonebook
CC = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -o -fsanitize=address
SRCS = phonebook.class.cpp main.cpp contacts.class.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	@echo "Compilation en cours..."
	$(CC) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation terminée!"

.c.o:
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(NAME) $(OBJS)

re: fclean all

fclean: clean

.PHONY: all clean re fclean
