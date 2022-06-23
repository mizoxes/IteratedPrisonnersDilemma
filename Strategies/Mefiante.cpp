#include "Mefiante.h"

Decision Mefiante::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    return Decision::TRAHIR;
  else
    return decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1];
}

std::string Mefiante::nom() {
  return "Mefiante";
}