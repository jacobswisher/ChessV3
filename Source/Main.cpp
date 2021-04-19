#include "../Headers/Board.h"
#include "../Headers/Move.h"
#include "../Headers/PieceMask.h"
//#include "../Headers/Helper.h"
#include <cstdint>
#include <iostream>



void print(uint64_t num){
  for (int i = 56; i < 64; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 48; i < 56; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 40; i < 48; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 32; i < 40; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 24; i < 32; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 16; i < 24; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 8; i < 16; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
  for (int i = 0; i < 8; i++) {
    uint64_t k = 1UL & (num >> i);
    if (k) std::cout << "1";
    else std::cout << "0";
  }
  std::cout << std::endl;
}



int main(){
  // Move m = Move(5,10,4);
  // std::cout <<  m.move << std::endl;
  // std::cout << (int) m.isCapture() << std::endl;
  // std::cout << std::hex << getBishopMask(7) << std::endl;
  //print(Board::whiteBishops);

  setMasks();
  // print(WP0);
  // print(WP1);
  // print(WP7);
  // print(NFILEH);
  // print(bpMask[40]);
  // print(bpMask[35]);
  //print(knightMask[27]);
}
