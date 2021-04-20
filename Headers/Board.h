#include "Move.h"
#include "PieceMask.h"

#include <cstdint>
#include "Defines.h"






  bool turn; //TRUE for white, FALSE for black

  uint64_t blackPieces;
  uint64_t whitePieces;
  uint64_t occupied;

  uint64_t board[20];

  // uint64_t epSquares;

  void setWhitePieces(){whitePieces = board[WP] | board[WN] | board[WB] | board[WR] | board[WQ] | board[WK];}
  void setBlackPieces(){blackPieces = board[BP] | board[BN] | board[BB] | board[BR] | board[BQ] | board[BK];}
  void setOccupied(){occupied = blackPieces | whitePieces;}
  void clockBoard(){turn = !turn; setWhitePieces(); setBlackPieces(); setOccupied();}
  void init(){

    board[WP] = 0x000000000000FF00;
    board[BP] = 0x00FF000000000000;
    board[WN] = 0x0000000000000042;
    board[BN] = 0x4200000000000000;
    board[WB] = 0x0000000000000024;
    board[BB] = 0x2400000000000000;
    board[WR] = 0x0000000000000081;
    board[BR] = 0x8100000000000000;
    board[WQ] = 0x0000000000000008;
    board[BQ] = 0x0800000000000000;
    board[WK] = 0x0000000000000010;
    board[BK] = 0x1000000000000000;

    turn = false;
    clockBoard();

    setMasks();
  }
  void doMove(Move m);
  void undoMove();
