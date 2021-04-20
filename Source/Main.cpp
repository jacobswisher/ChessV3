#include "../Headers/Board.h"

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
  init();
  print(masks[5][0]);
}
