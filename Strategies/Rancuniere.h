#ifndef RANCUNIERE_H
#define RANCUNIERE_H

#include "../IStrategie.h"

class Rancuniere : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  bool trahirToujours;
};

#endif