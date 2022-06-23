#ifndef DILEMMEITEREDESPRISONNIERS_H
#define DILEMMEITEREDESPRISONNIERS_H

#include "Joueur.h"
#include <vector>

class DilemmeItereDesPrisonniers {
public:
  static void jouer(Joueur& j1, Joueur& j2, int nombreDeTours);

private:
  static int T, D, C, P, N;
};

#endif