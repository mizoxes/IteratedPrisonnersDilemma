#ifndef PERIODIQUEMECHANTE_H
#define PERIODIQUEMECHANTE_H

#include "../IStrategie.h"

class PeriodiqueMechante : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int idx;
};

#endif