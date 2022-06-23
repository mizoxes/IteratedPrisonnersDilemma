#ifndef TOURNOI_H
#define TOURNOI_H

#include "IStrategie.h"
#include <vector>

class Tournoi {
public:
  Tournoi(int nombreDeTours);

  void ajouterStrategie(IStrategie* strategie);
  void commencer();
  void afficherResultats();

  void sauvegarder(const std::string& nomFichier);
  bool charger(const std::string& nomFichier);

private:
  std::vector<IStrategie*> strategies;
  int nombreDeTours;
  std::vector<std::vector<int>> resultats;
};

#endif