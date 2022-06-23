#include "GraineDeChampion.h"

Decision GraineDeChampion::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  if (decisionPrecedenteAdversaire.size() == 0) {
    idx = t = s = 0;
    punition = -2;
    return Decision::COOPERER;
  }

  if (decisionPrecedenteAdversaire[decisionPrecedenteAdversaire.size() - 1] == Decision::TRAHIR)
    t++;

  if (idx++ % 20 == 0) {
    float avg = (monScore - s) / 20.0f;
    if (avg < 1.5f)
      return Decision::RENONCER;
  }

  if (punition > 0) {
    punition--;
    return Decision::TRAHIR;
  } else if (punition > -2) {
    punition--;
    return Decision::COOPERER;
  } else {
    if (t) {
      punition = t * (t + 1) / 2 - 1;
      return Decision::TRAHIR;
    } else {
      return Decision::COOPERER;
    }
  }
}

std::string GraineDeChampion::nom() {
  return "GraineDeChampion";
}

