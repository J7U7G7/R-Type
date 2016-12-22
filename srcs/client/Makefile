CXX=g++
NAME=R-Type_client
DIRN=../
LDLIBS=include/SMFL-2.4.1/
FLLIBS=-lsfml-graphics -lsfml-window -lsfml-system
SRCS=main.cpp

all:	client

client: 
	$(CXX) -o $(NAME) $(SRCS) $(FLLIBS)
	mv $(NAME) $(DIRN)

clean:
	cd $(DIRN) && rm -f $(NAME)


