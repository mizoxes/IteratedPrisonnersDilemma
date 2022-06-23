#include "DonnantDonnant.h"

Decision DonnantDonnant::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    return Decision::COOPERER;
  else
    return decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1];
}

std::string DonnantDonnant::nom() {
  return "DonnantDonnant";
}