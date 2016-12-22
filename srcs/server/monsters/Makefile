SONAME 		= FireStingray.so GreenPanther.so
DLLNAME		= FireStingray.dll GreenPanther.dll
CC 			= g++
CXXFLAGS 	= -W -Wall -O5 -g -shared -fPIC -I../includes -fPIC

OBJS		= MonsterInfo.o

all: $(SONAME) $(DLLNAME)

re: fclean all

%.so:
	$(CC) $(CXXFLAGS) -o $@ $(@:.so=)/$(OBJS)

%.dll:
	$(CC) $(CXXFLAGS) -o $@ $(@:.dll=)/$(OBJS)

clean:

fclean: clean
	rm -rf $(SONAME) $(DLLNAME)

.PHONY: clean