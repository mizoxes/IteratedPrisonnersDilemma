#ifndef MECHANTE_H
#define MECHANTE_H

#include "../IStrategie.h"

class Mechante : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();
};

#endif