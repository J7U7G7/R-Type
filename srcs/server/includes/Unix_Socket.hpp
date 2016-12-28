//
// Created by ExTa on 25/12/2016.
//

#ifndef R_TYPE_UNIX_SOCKET_HPP
#define R_TYPE_UNIX_SOCKET_HPP

#include "main.hpp"

class Unix_Socket {
    public:
        Unix_Socket();
        ~Unix_Socket();
};

#ifndef WIN32
typedef Unix_Socket Socket;
#endif

#endif //R_TYPE_UNIX_SOCKET_HPP
