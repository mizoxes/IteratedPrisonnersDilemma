#ifndef SONDEUR4COUPS_H
#define SONDEUR4COUPS_H

#include "../IStrategie.h"

class Sondeur4Coups : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int idx, t;
};

#endif