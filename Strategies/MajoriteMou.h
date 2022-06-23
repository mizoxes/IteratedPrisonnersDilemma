#ifndef MAJORITEMOU_H
#define MAJORITEMOU_H

#include "../IStrategie.h"

class MajoriteMou : public IStrategie {
  Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore);
  std::string nom();

  int c, t;
};

#endif