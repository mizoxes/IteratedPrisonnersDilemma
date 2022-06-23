#include "DilemmeItereDesPrisonniers.h"

int DilemmeItereDesPrisonniers::T = 5,
    DilemmeItereDesPrisonniers::D = 0,
    DilemmeItereDesPrisonniers::C = 3,
    DilemmeItereDesPrisonniers::P = 1,
    DilemmeItereDesPrisonniers::N = 2;

void DilemmeItereDesPrisonniers::jouer(Joueur& j1, Joueur& j2, int nombreDeTours) {
  for (int compteur = 0; compteur < nombreDeTours; compteur++) {
    j1.jouer(j2.getDecisionPrecedente());
    j2.jouer(j1.getDecisionPrecedente());

    if (j1.getDecision() == Decision::TRAHIR && j2.getDecision() == Decision::COOPERER) {
      j1.ajouterScore(T);
      j2.ajouterScore(D);
    } else if (j1.getDecision() == Decision::COOPERER && j2.getDecision() == Decision::TRAHIR) {
      j1.ajouterScore(D);
      j2.ajouterScore(T);
    } else if (j1.getDecision() == Decision::COOPERER && j2.getDecision() == Decision::COOPERER) {
      j1.ajouterScore(C);
      j2.ajouterScore(C);
    } else if (j1.getDecision() == Decision::TRAHIR && j2.getDecision() == Decision::TRAHIR) {
      j1.ajouterScore(P);
      j2.ajouterScore(P);
    } else if (j1.getDecision() == Decision::RENONCER || j2.getDecision() == Decision::RENONCER) {
      j1.ajouterScore(N);
      j2.ajouterScore(N);
      break;
    }
  }
}