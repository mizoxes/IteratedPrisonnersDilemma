#include "Sondeur4Coups.h"

Decision Sondeur4Coups::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    idx = 0, t = 0;
  else if (decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] == Decision::TRAHIR)
    t++;

  if (idx <= 1) {
    idx++;
    return Decision::COOPERER;
  } else if (idx <= 3) {
    idx++;
    return Decision::TRAHIR;
  } else {
    if (t >= 3)
      return Decision::RENONCER;
    else
      return Decision::COOPERER;
  }
}

std::string Sondeur4Coups::nom() {
  return "Sondeur4Coups";
}