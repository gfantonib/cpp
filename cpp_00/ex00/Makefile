NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CPP) $(FLAGS) $(SOURCE) -o $@

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all