#ifndef MAJORITEDUR_H
#define MAJORITEDUR_H

#include "../IStrategie.h"

class MajoriteDur : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int c, t;
};

#endif