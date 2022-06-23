#include "Gentille.h"

Decision Gentille::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) {
  return Decision::COOPERER;
}

std::string Gentille::nom() {
  return "Gentille";
}