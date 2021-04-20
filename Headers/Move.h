
#include <cstdint>

class Move {


public:
  uint8_t origin;
  uint8_t destin;
  bool isCapture;
  bool isDoublePush;
  bool isKingCastle;
  bool isQueenCastle;
  bool isEP;
  bool isKnightPromo;
  bool isBishopPromo;
  bool isRookPromo;
  bool isQueenPromo;


  Move(uint8_t o, uint8_t d) {
    origin = o;
    destin = d;
  }

  Move(uint8_t o, uint8_t d, bool capture, bool doublePawn, bool kc, bool qc, bool ep, bool knightp, bool bishopp, bool rookp, bool queenp){
    origin = o;
    destin = d;
    isCapture = capture;
    isDoublePush = doublePawn;
    isKingCastle = kc;
    isQueenCastle = qc;
    isEP = ep;
    isKnightPromo = knightp;
    isBishopPromo = bishopp;
    isRookPromo = rookp;
    isQueenPromo = queenp;
  }
};
