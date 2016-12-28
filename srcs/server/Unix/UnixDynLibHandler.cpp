#include <dlfcn.h>
#include "UnixDynLibHandler.hpp"

UnixDynLibHandler::UnixDynLibHandler(const string& lib) {
    loadedLibrary = dlopen((lib + ".so").c_str(), RTLD_LAZY);
    if (loadedLibrary == NULL)
        cout << "Could not open library " + (lib + ".so") + " - " << dlerror() << endl;
}

UnixDynLibHandler::~UnixDynLibHandler() {
    dlclose(loadedLibrary);
}

IDynLibHandler::voidPtrFunc      UnixDynLibHandler::getVoidSymLink(const string& funcName) {
    void* func = dlsym(loadedLibrary, funcName.c_str());
    if (func == NULL) {
        cout << "Could not find symbol " + funcName + "(" << dlerror() << ")" << endl;
    } else {
        return (reinterpret_cast<voidPtrFunc>(func));
    }
}