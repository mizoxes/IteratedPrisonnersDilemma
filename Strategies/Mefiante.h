#ifndef MEFIANTE_H
#define MEFIANTE_H

#include "../IStrategie.h"

class Mefiante : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();
};

#endif