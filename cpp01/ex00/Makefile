NAME = brainz
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
INCPATH = include
HEADER = -I$(INCPATH)
SRCPATH = source
SRCFILES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
SRC = $(addprefix $(SRCPATH)/, $(SRCFILES))

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(FLAGS) $(HEADER) $^ -o $@

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re