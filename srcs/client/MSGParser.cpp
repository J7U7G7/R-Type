#include "MSGParser.hpp"
 
// Shared
char    BitChar(std::string origin) {
  int nChar = 0;
  int Base = 128;
  for (int i = 0; i < 8; i++) {
    if (origin[i] == '1')
      {
    nChar += Base;
      }
    Base = Base / 2;
  }
  return (nChar);
}
 
std::string *BitBigInt(int value){
  std::string *nStr = new std::string();
  std::string *fStr = new std::string();
  int Base = pow(16, 2);
  for (int i = 0; i < 16; i++)
    {
      if (value >= Base) {
    value -= Base;
    nStr += '1';
      }
      else
    nStr += '0';
    }
  fStr += BitChar(nStr->substr(0,8));
  fStr += BitChar(nStr->substr(8,8));
  return(fStr);
}
 
int OctToInt(std::string oct, int nb_oct){
  int n = 0;
  char c;
  int base = pow(8*nb_oct,2);
  int ubase;
  int nValue = 0;
  for (int i = 0; i < 8*nb_oct; i++)
    {
      if (i % 8 == 0)
    {
      ubase = pow(8, 2);
      c = oct[n];
      n++;
    }
      if (c >= ubase)
    {
      nValue += base;
      c -= ubase;
    }
      base = base / 2;
      ubase = ubase / 2;
    }
  return nValue;
}

// ____Client______
// Msg
string     *MsgReady() {
    cout << "Msg ready 1" << endl;
    string *nStr = new string(BitChar("11111111"), 2);
    cout << "Msg ready 2" << endl;
    return (nStr);
}

string    *MsgMove(int moveT) {
    string *nStr = new string();
    string *fStr = new string();
    nStr += '1';
    nStr += '1';
    int base = 4;
    while (moveT > 0) {
        if (moveT >= base)
        {
            nStr += '1';
            moveT -= base;
        }
        else
            nStr += '0';
        base = base / 2;
    }
    nStr += '0';
    nStr += '0';
    nStr += '0';
    nStr += '0';

    fStr += BitChar(*nStr);
    return (fStr);
}

string     *MsgFire() {
    std::string *nStr = new std::string();
 
    nStr += BitChar("00000000");
    return (nStr);
}
 
// receive
void            UnFormatCreate(string msg) {
    int ItemType = OctToInt(msg.substr(0,2), 2) - 49152;
    int ItemId = OctToInt(msg.substr(2,2), 2);
    int x = OctToInt(msg.substr(4,2), 2);
    int y = OctToInt(msg.substr(6,2), 2);
 
    // Add Code Here
}
void            UnFormatDestruct(string msg) {
    int ItemId = OctToInt(msg.substr(1, 2), 2);
 
    // Add Code Here
}
void               UnFormatItemMove(string msg) {
    int MoveT = 0;
    int multi = 0;
    int c = msg[0] - 64;
    int base = 32;
    int ubase = 4;

    for (int i = 0; i < 3; i++)
    {
        if (c >= base)
        {
            c -= base;
            MoveT += ubase;
        }
        ubase = ubase / 2;
        base = base / 2;
    }
    for (int i = 0; i < 3; i++)
    {
        if (c >= base) {
            c -= base;
            multi += base;
        }
        base = base / 2;
    }
    int ItemId = OctToInt(msg.substr(1, 2), 2);
 
    // Add Code Here
}

void            UnFormatEnd(string msg) { }

int             UnFormatStarter(string msg) {

    int map_nb;
    if (OctToInt(msg.substr(0,1),1) == 0)
    {
        if ((map_nb = OctToInt(msg.substr(1,1),1)) == 0) // Welcome
        {
            return 0;
        }
        else // Start
        {
            return map_nb;
        }
    }
    UnFormatEnd(msg);
    return 0;
}
 
int            CDetectMsg(string msg) {

    int c = msg[0];
 
    if (c >= 128) { // 1?
        c -= 128;
        if (c >= 64) { // 11 // ItemCreation
            UnFormatCreate(msg);
            return (0);
        }
        else // 10 // ItemDestruction
            UnFormatDestruct(msg);
            return (0);
    }
    else // 0?
    if (c >= 64) { // 01 // ItemMove
        UnFormatItemMove(msg);
        return (0);
    }
    return (UnFormatStarter(msg)); // 00 // Welcome or Start or End
}