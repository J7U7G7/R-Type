#ifndef	 	__WINDOWSDYNLIBHANDLER_HPP__
# define 	__WINDOWSDYNLIBHANDLER_HPP__

#include "main.hpp"
#include "IDynLibHandler.hpp"
#include <Windows.h>

class WindowsDynLibHandler : public IDynLibHandler {

public:
    WindowsDynLibHandler(const string&);
    ~WindowsDynLibHandler();
    voidPtrFunc      getVoidSymLink(const string& funcName);

private:
    HMODULE			loadedLibrary;
};

typedef WindowsDynLibHandler AbstractLib;

#endif