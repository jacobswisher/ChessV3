
#include <cstdint>

class Move {


public:
  uint16_t move = 0;
  Move(uint8_t origin, uint8_t destin, uint8_t flags){
    move += (uint16_t) origin;
    move <<= 6;
    move += (uint16_t) destin;
    move <<= 4;
    move += (uint16_t) flags;
  }
  uint8_t getOrigin(){return (uint8_t)((0xFC00 & move) >> 10);}
  uint8_t getDestin(){return (uint8_t)((0x03F0 & move) >> 4);}
  bool isPromotion() {return 8 & move;}
  bool isCapture()   {return 4 & move;}
  bool isSpecial1()  {return 2 & move;}
  bool isSpecial2()  {return 1 & move;}


};
