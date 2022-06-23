#ifndef JOUEUR_H
#define JOUEUR_H

#include "IStrategie.h"
#include <string>
#include <vector>

class Joueur {
public:
  Joueur();

  void setStrategie(IStrategie* strategie);

  void setScore(int score);
  void ajouterScore(int score);
  int  getScore();

  Decision getDecision();
  std::vector<Decision> getDecisionPrecedente();
  void     jouer(const std::vector<Decision>& decisionPrecedenteAdversaire);

private:
  IStrategie* strategie;
  int         score;
  Decision    decision;
  std::vector<Decision>    decisionPrecedente;
};

#endif