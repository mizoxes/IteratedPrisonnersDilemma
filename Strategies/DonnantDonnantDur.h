#ifndef DONNANTDONNANTDUR_H
#define DONNANTDONNANTDUR_H

#include "../IStrategie.h"

class DonnantDonnantDur : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();
};

#endif