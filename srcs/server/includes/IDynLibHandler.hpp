#ifndef 	__IDYNLIBHANDLER_HPP__
# define 	__IDYNLIBHANDLER_HPP__

#include "main.hpp"
#include <string>

class IDynLibHandler {

public:
	virtual ~IDynLibHandler() {};
	typedef void*	(*voidPtrFunc)();

	template<typename Type>
    Type 	getSymLink(const string& funcName) {
        return (reinterpret_cast<Type>(getVoidSymLink(funcName)));
    }
    virtual voidPtrFunc 	getVoidSymLink(const string& funcName) = 0;
};

#ifdef WIN32
	#include "WindowsDynLibHandler.hpp"
#else
	#include "UnixDynLibHandler.hpp"
#endif

#endif