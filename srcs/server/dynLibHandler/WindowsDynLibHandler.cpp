#include "WindowsDynLibHandler.hpp"

WindowsDynLibHandler::WindowsDynLibHandler(const string& lib) {
    loadedLibrary = LoadLibrary((lib + ".dll").c_str());
    if (loadedLibrary == NULL)
        cout << "Could not open library " + (lib + ".dll") << endl;
}

WindowsDynLibHandler::~WindowsDynLibHandler() {
    FreeLibrary(loadedLibrary);
}

IDynLibHandler::voidPtrFunc      WindowsDynLibHandler::getVoidSymLink(const string& funcName) {
    FARPROC func = GetProcAddress(loadedLibrary, funcName.c_str());
    if (func == NULL) {
        cout << "Could not find symbol " + funcName << endl;
    } else {
        return (reinterpret_cast<voidPtrFunc>(func));
    }
}