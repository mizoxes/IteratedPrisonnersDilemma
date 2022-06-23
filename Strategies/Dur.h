#ifndef DUR_H
#define DUR_H

#include "../IStrategie.h"

class Dur : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();
};

#endif