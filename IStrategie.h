#ifndef ISTRATEGIE_H
#define ISTRATEGIE_H

#include "Decision.h"
#include <string>
#include <vector>

class IStrategie {
public:
  virtual ~IStrategie() {}
  virtual Decision jouer(const std::vector<Decision>& decisionPrecedenteAdversaire, int monScore) = 0;
  virtual std::string nom() = 0;
};

#endif