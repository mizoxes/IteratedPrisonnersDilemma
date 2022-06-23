#include "PeriodiqueMechante.h"

Decision PeriodiqueMechante::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    idx = 1;
  if (idx++ % 3 == 0)
    return Decision::COOPERER;
  else
    return Decision::TRAHIR;
}

std::string PeriodiqueMechante::nom() {
  return "PeriodiqueMechante";
}