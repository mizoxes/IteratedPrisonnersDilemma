#ifndef DONNANTDONNANTAVECSEUIL_H
#define DONNANTDONNANTAVECSEUIL_H

#include "../IStrategie.h"

class DonnantDonnantAvecSeuil : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int idx, s;
};

#endif