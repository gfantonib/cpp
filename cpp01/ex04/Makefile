CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCPATH = source
INCPATH = include
HEADER = -I$(INCPATH)
OBJPATH = object

NAME = executable
SRCFILES =
SRCMAIN = main.cpp
MAINOBJ = $(OBJPATH)/$(SRCMAIN:.cpp=.o)
OBJ = $(SRCFILES:%.cpp=$(OBJPATH)/%.o)

NAME_TST = executable_tst
SRCFILES_TST =
SRCMAIN_TST = test.cpp
MAINOBJ_TST = $(OBJPATH)/$(SRCMAIN_TST:.cpp=.o)
OBJ_TST = $(SRCFILES_TST:%.cpp=$(OBJPATH)/%.o)

all: $(NAME)

$(NAME): $(MAINOBJ) $(OBJ)
	$(CC) $(CFLAGS) $(HEADER) $(OBJ) $(MAINOBJ) -o $(NAME)

$(MAINOBJ): $(SRCMAIN) | $(OBJPATH)
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(OBJPATH)/%.o: $(SRCPATH)/%.cpp
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(OBJPATH):
	mkdir -p $(OBJPATH)

test: all
	$(MAKE) NAME=$(NAME_TST) SRCFILES=$(SRCFILES_TST) SRCMAIN=$(SRCMAIN_TST) OBJ=$(OBJ_TST) MAINOBJ=$(MAINOBJ_TST) all

clean:
	rm -rf $(OBJ) $(OBJ_TST) $(OBJPATH)

fclean: clean
	rm -f $(NAME) $(NAME_TST)
	rm -f file*

re: fclean all

.PHONY: all clean fclean re