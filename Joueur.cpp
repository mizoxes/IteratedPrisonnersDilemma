#include "Joueur.h"

Joueur::Joueur()
  : strategie(nullptr),
    decision(Decision::AUCUN),
    score(0) {
}

void Joueur::setStrategie(IStrategie *strategie) {
  this->strategie = strategie;
}

void Joueur::setScore(int score) {
  this->score = score;
}

void Joueur::ajouterScore(int score) {
  this->score += score;
}

int Joueur::getScore() {
  return score;
}

Decision Joueur::getDecision() {
  return decision;
}

std::vector<Decision> Joueur::getDecisionPrecedente() {
  return decisionPrecedente;
}

void Joueur::jouer(const std::vector<Decision>& decisionPrecedenteAdversaire) {
  if (decision != Decision::AUCUN) {
    decisionPrecedente.push_back(decision);
    if (decisionPrecedente.size() == 3)
      decisionPrecedente.erase(decisionPrecedente.begin());
  }
  decision = strategie->jouer(decisionPrecedenteAdversaire, score);
}