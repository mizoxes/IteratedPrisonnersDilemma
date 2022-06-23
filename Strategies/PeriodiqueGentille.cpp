#include "PeriodiqueGentille.h"

Decision PeriodiqueGentille::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    idx = 1;
  if (idx++ % 3 == 0)
    return Decision::TRAHIR;
  else
    return Decision::COOPERER;
}

std::string PeriodiqueGentille::nom() {
  return "PeriodiqueGentille";
}