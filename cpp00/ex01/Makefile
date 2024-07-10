NAME = awesome
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
INCPATH = include
HEADER = -I$(INCPATH)
SRCPATH = source
SOURCE = main.cpp

all: $(NAME)

$(NAME): $(SRCPATH)/$(SOURCE)
	$(CPP) $(FLAGS) $(HEADER) $< -o $@

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all