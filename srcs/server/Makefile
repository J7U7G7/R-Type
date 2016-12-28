# To compile on Unix systems.


NAME 		= r-type-server
CC 			= g++

all: $(NAME) monster

$(NAME):
	g++ *.cpp Unix/*.cpp -Iincludes -ldl -o $(NAME)

monster:
	cd monsters/ && make re

clean:
	rm -rf *.o Unix/*.o *~ Unix/*~

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean