#include "DonnantDonnantDur.h"

Decision DonnantDonnantDur::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    return Decision::COOPERER;
  else if (decisionPrecedenteAdversaire.size() == 1)
    return decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1];
  else {
    if (decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] != 
        decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 2])
      return Decision::COOPERER;
    else
      return Decision::TRAHIR;
  }
}

std::string DonnantDonnantDur::nom() {
  return "DonnantDonnantDur";
}