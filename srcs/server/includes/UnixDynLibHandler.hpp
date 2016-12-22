#ifndef	 	__UNIXDYNLIBHANDLER_HPP__
# define 	__UNIXDYNLIBHANDLER_HPP__

#include "main.hpp"
#include "IDynLibHandler.hpp"

class UnixDynLibHandler : public IDynLibHandler {

public:
    UnixDynLibHandler(const string&);
    ~UnixDynLibHandler();
    voidPtrFunc      getVoidSymLink(const string& funcName);

private:
    void*			loadedLibrary;
};

typedef UnixDynLibHandler AbstractLib;

#endif