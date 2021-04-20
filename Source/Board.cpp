#include "../Headers/Board.h"

#include <cstdint>
#include <stack>

std::stack<Move> moveStack;
std::stack<uint8_t> capturedStack;


//forcefully does move, assumes move has been checked and is legal
void doMove(Move m){

  moveStack.push(m);
}

//undo last move
void undoMove(){
  Move m = moveStack.top();
  moveStack.pop();
  uint8_t piece = capturedStack.top();
  capturedStack.pop();
  if (m.isCapture)
  piece += 1;
}
