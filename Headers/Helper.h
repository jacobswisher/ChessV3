#include "../Source/Main.h"
#include <cstdint>
#include <stdio.h>

uint8_t row(uint8_t pos){return pos / BOARD_WIDTH;}

uint64_t invRow(uint8_t pos){return 7 - pos / BOARD_WIDTH;}

uint8_t col(uint8_t pos){return pos % BOARD_WIDTH;}

uint64_t getRank(uint8_t pos) {return (uint64_t)RANK1 << (row(pos) * BOARD_WIDTH);}

uint64_t getFile(uint8_t pos) {return AFILE << col(pos);}


uint64_t swneDiag(uint8_t pos) {
  uint8_t p = pos % 9;
  uint8_t r = row(pos);
  uint8_t c = col(pos);
  if (pos == 7 || pos == 56) return 0;
  if (r == c)     return A1H8;
  else if (r > c) return A1H8 << ((9 - p) * 8);
  else            return A1H8 >> (p * 8);
}

uint64_t senwDiag(uint8_t pos) {
  uint8_t p = pos % 7;
  uint8_t r = invRow(pos);
  uint8_t c = col(pos);
  if (pos == 63 || pos == 0) return 0;
  if (r == c)     return A8H1;
  else if (r < c) return A8H1 << (p * 8);
  else            return A8H1 >> ((7 - p) * 8);

}
