#ifndef DONNANTDONNANT_H
#define DONNANTDONNANT_H

#include "../IStrategie.h"

class DonnantDonnant : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();
};

#endif