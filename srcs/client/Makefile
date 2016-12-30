CXX 		= g++
NAME		= r-type-client
LIBSFML		= ../../libs/SFML-2.4.1/includes
CXX_FLAGS	= -stdlib=libc++
LDFLAGS 	= -lsfml-graphics -lsfml-system -lsfml-window
LINKLIB 	= ../../libs/SFML-2.4.1/lib
SRCS 		= *.cpp
OBJS		= *.o

all: $(NAME)

$(NAME): 
	$(CXX) -c $(SRCS) -I$(LIBSFML) -Iincludes
	$(CXX) $(OBJS) -o $(NAME) -L$(LINKLIB) $(LDFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all


