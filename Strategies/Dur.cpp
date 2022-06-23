#include "Dur.h"

Decision Dur::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() &&
      decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] == Decision::TRAHIR)
    return Decision::RENONCER;
  else
    return Decision::TRAHIR;
}

std::string Dur::nom() {
  return "Dur";
}