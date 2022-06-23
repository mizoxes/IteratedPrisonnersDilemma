#ifndef GENTILLE_H
#define GENTILLE_H

#include "../IStrategie.h"

class Gentille : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();
};

#endif