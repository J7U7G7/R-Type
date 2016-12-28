//
// Created by ExTa on 25/12/2016.
//

#ifndef R_TYPE_WIN_SOCKET_HPP
#define R_TYPE_WIN_SOCKET_HPP

#include <iostream>

class Win_Socket {
    public:
        Win_Socket();
        ~Win_Socket();
};


#ifdef WIN32
    typedef Win_Socket Socket;
#endif

#endif //R_TYPE_WIN_SOCKET_HPP
