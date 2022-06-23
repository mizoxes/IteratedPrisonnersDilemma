#ifndef GRAINEDECHAMPION_H
#define GRAINEDECHAMPION_H

#include "../IStrategie.h"

class GraineDeChampion : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int idx, t, s;
  int punition;
};

#endif