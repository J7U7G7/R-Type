#ifndef __MSGPARSER_HPP__
#define __MSGPARSER_HPP__

#include "main.hpp"
#include <math.h>

char		BitChar(string);
string 		*BitBigInt(int);
int 		OctToInt(string, int);
string     	*MsgReady();
string     	*MsgMove(int MoveT);
string     	*MsgFire();
void       	UnFormatCreate(string msg);
void       	UnFormatDestruct(string msg);
void       	UnFormatItemMove(string msg);
void       	UnFormatEnd(string msg);
int        	UnFormatStarter(string msg);
int       	CDetectMsg(string msg);

#endif