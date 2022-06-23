#include "Rancuniere.h"

Decision Rancuniere::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0) {
    trahirToujours = false;
    return Decision::COOPERER;
  }
  
  if (!trahirToujours &&
       decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] == Decision::TRAHIR)
  {
    trahirToujours = true;
  }

  if (trahirToujours)
    return Decision::TRAHIR;
  else  
    return Decision::COOPERER;
}

std::string Rancuniere::nom() {
  return "Rancuniere";
}