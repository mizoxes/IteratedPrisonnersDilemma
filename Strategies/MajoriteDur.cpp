#include "MajoriteDur.h"

Decision MajoriteDur::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0)
    c = t = 0;
  else if (decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] == Decision::COOPERER)
    c++;
  else if (decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] == Decision::TRAHIR)
    t++;
  if (c > t)
    return Decision::COOPERER;
  else
    return Decision::TRAHIR;
}

std::string MajoriteDur::nom() {
  return "MajoriteDur";
}