#ifndef PERIODIQUEGENTILLE_H
#define PERIODIQUEGENTILLE_H

#include "../IStrategie.h"

class PeriodiqueGentille : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int idx;
};

#endif