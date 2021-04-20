
#include "Defines.h"
#include <cstdint>


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

  uint64_t getRookMask(uint8_t pos) {return getRank(pos) | getFile(pos);}

  uint64_t getBishopMask(uint8_t pos) {return swneDiag(pos) | senwDiag(pos);}


  uint64_t getWPMask(uint8_t pos){
    if      (col(pos) == 0) return (uint64_t) WP0 << pos;
    else if (col(pos) == 7) return (uint64_t) WP7 << (pos - 7);
    return (uint64_t) WP1  << (pos - 1) ;
  }
  uint64_t getBPMask(uint8_t pos){
    if      (col(pos) == 0) return (uint64_t) BP16 << (pos - 16);
    else if (col(pos) == 7) return (uint64_t) BP23 << (pos - 23);
    return (uint64_t) BP17 << (pos - 17) ;
  }

  uint64_t shiftKing(uint8_t pos, uint64_t mask) {
    uint64_t castle = 0;
    if      (pos == 4 ) castle = 0x0000000000000044;
    else if (pos == 60) castle = 0x4400000000000000;
    int factor = BOARD_WIDTH * (row(pos) - 1);
    if (factor < 0) {
      return (mask >> 8) | castle;
    }
    return (mask << factor) | castle;
  }

  uint64_t getKingMask(uint8_t pos){
    switch (col(pos)) {
      case 0: return shiftKing(pos, KFILEA);
      case 1: return shiftKing(pos, KFILEB);
      case 2: return shiftKing(pos, KFILEC);
      case 3: return shiftKing(pos, KFILED);
      case 4: return shiftKing(pos, KFILEE);
      case 5: return shiftKing(pos, KFILEF);
      case 6: return shiftKing(pos, KFILEG);
      case 7: return shiftKing(pos, KFILEH);
    }
    return 0;
  }

  uint64_t shiftKnight(uint8_t pos, uint64_t mask) {
    int factor = BOARD_WIDTH * (row(pos) - 2);
    if (factor == -8) {
      return mask >> 8;
    }
    if (factor == -16) {
      return mask >> 16;
    }
    return mask << factor;
  }

  uint64_t getKnightMask(uint8_t pos){
    switch (col(pos)) {
      case 0: return shiftKnight(pos, NFILEA);
      case 1: return shiftKnight(pos, NFILEB);
      case 2: return shiftKnight(pos, NFILEC);
      case 3: return shiftKnight(pos, NFILED);
      case 4: return shiftKnight(pos, NFILEE);
      case 5: return shiftKnight(pos, NFILEF);
      case 6: return shiftKnight(pos, NFILEG);
      case 7: return shiftKnight(pos, NFILEH);
    }
    return 0;
  }

  uint64_t *masks[7];
  uint64_t rookMask[64];
  uint64_t bishopMask[64];
  uint64_t queenMask[64];
  uint64_t knightMask[64];
  uint64_t bpMask[64];
  uint64_t wpMask[64];
  uint64_t kingMask[64];

  void setMasks(){
    for (unsigned i = 0; i < 64; i++) {
      rookMask[i] = (getRookMask((uint8_t)i)) & (~(1UL << i));
    }
    for (unsigned i = 0; i < 64; i++) {
      bishopMask[i] = (getBishopMask((uint8_t)i)) & (~(1UL << i));
    }
    for (unsigned i = 0; i < 64; i++) {
      queenMask[i] = (getRookMask((uint8_t)i) | getBishopMask((uint8_t)i)) & (~(1UL << i));
    }
    for (unsigned i = 0; i < 64; i++) {
      knightMask[i] = (getKnightMask((uint8_t)i)) & (~(1UL << i));
    }
    for (unsigned i = 0; i < 64; i++) {
      wpMask[i] = (getWPMask((uint8_t)i)) & (~(1UL << i));
    }
    for (unsigned i = 0; i < 64; i++) {
      bpMask[i] = (getBPMask((uint8_t)i)) & (~(1UL << i));
    }
    for (unsigned i = 0; i < 64; i++) {
      kingMask[i] = (getKingMask((uint8_t)i)) & (~(1UL << i));
    }
    masks[0] = wpMask;
    masks[1] = bpMask;
    masks[2] = knightMask;
    masks[3] = bishopMask;
    masks[4] = rookMask;
    masks[5] = queenMask;
    masks[6] = kingMask;
  }
