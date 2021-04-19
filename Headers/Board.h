
#include <cstdint>

class Board {
public:


  static uint64_t whitePawns;
  static uint64_t whiteKnights;
  static uint64_t whiteBishops;
  static uint64_t whiteRooks;
  static uint64_t whiteQueens;
  static uint64_t whiteKings;

  static uint64_t blackPawns;
  static uint64_t blackKnights;
  static uint64_t blackBishops;
  static uint64_t blackRooks;
  static uint64_t blackQueens;
  static uint64_t blackKings;

  static uint64_t blackPieces;
  static uint64_t whitePieces;
  static uint64_t occupied;


  static void setWhitePieces(){whitePieces = whitePawns | whiteKnights | whiteBishops | whiteRooks | whiteQueens | whiteKings;}
  static void setBlackPieces(){blackPieces = blackPawns | blackKnights | blackBishops | blackRooks | blackQueens | blackKings;}
  static void setOccupied(){occupied = blackPieces | whitePieces;}
  static void clock(){setWhitePieces(); setBlackPieces(); setOccupied();}
};

uint64_t Board::whitePawns   = 0x000000000000FF00;
uint64_t Board::whiteKnights = 0x0000000000000042;
uint64_t Board::whiteBishops = 0x0000000000000024;
uint64_t Board::whiteRooks   = 0x0000000000000081;
uint64_t Board::whiteQueens  = 0x0000000000000008;
uint64_t Board::whiteKings   = 0x0000000000000010;

uint64_t Board::blackPawns   = 0x00FF000000000000;
uint64_t Board::blackKnights = 0x4200000000000000;
uint64_t Board::blackBishops = 0x2400000000000000;
uint64_t Board::blackRooks   = 0x8100000000000000;
uint64_t Board::blackQueens  = 0x0800000000000000;
uint64_t Board::blackKings   = 0x1000000000000000;
