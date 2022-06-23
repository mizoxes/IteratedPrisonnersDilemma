#include "DonnantDonnantAvecSeuil.h"

Decision DonnantDonnantAvecSeuil::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0) {
    idx = s = 0;
    return Decision::COOPERER;
  }
    
  if (idx++ % 5 == 0) {
    int avg = (monScore - s) / 5;
    if (avg < 2)
      return Decision::RENONCER;
    s = monScore;
  }

  return decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1];
}

std::string DonnantDonnantAvecSeuil::nom() {
  return "DonnantDonnantAvecSeuil";
}