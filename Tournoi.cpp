#include "Tournoi.h"
#include "DilemmeItereDesPrisonniers.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

Tournoi::Tournoi(int _nombreDeTours)
  :nombreDeTours(_nombreDeTours) {
}

void Tournoi::ajouterStrategie(IStrategie* strategie) {
  strategies.push_back(strategie);
}

void Tournoi::commencer() {
  resultats.clear();
  resultats.resize(strategies.size());
  for (size_t i = 0; i < resultats.size(); i++) {
    resultats[i].resize(strategies.size());
  }
  
  for (size_t i = 0; i < strategies.size(); i++) {
    for (size_t j = i; j < strategies.size(); j++) {
      Joueur j1, j2;
      j1.setStrategie(strategies[i]);
      j2.setStrategie(strategies[j]);

      DilemmeItereDesPrisonniers::jouer(j1, j2, nombreDeTours);

      resultats[i][j] = j1.getScore();
      resultats[j][i] = j2.getScore();
    }
  }
}

void Tournoi::afficherResultats() {
  int maxw = 0;
  for (size_t i = 0; i < strategies.size(); i++)
    maxw = std::max(maxw, (int)strategies[i]->nom().length());
  
  cout << left << setw(maxw + 1) << " ";
  for (size_t i = 0; i < resultats.size(); i++)
    cout << left << setw(strategies[i]->nom().length() + 3) << "| " + strategies[i]->nom();
  cout << left << setw(9) << "| Total" << endl;

  for (int j = 0; j < maxw + 1; j++)
      cout << "-";
  cout << "+";
  for (size_t i = 0; i < resultats.size(); i++) {
    for (int j = 0; j < strategies[i]->nom().length() + 2; j++)
      cout << "-";
    cout << "+";
  }
  cout << "--------\n";

  string gagnant;
  int maxsum = -1;
  bool egalite = true;
  for (size_t i = 0; i < resultats.size(); i++) {
    cout << left << setw(maxw + 1) << strategies[i]->nom();

    int sum = 0;
    for (size_t j = 0; j < resultats[i].size(); j++) {
      cout << left << setw(strategies[j]->nom().length() + 3) << "| " + to_string(resultats[i][j]);
      sum += resultats[i][j];
    }
    cout << left << setw(9) << "| " + to_string(sum) << endl;

    if (sum > maxsum) {
      if (i != 0 && egalite)
        egalite = false;
      gagnant = strategies[i]->nom();
      maxsum = sum;
    }
    
    for (int j = 0; j < maxw + 1; j++)
      cout << "-";
    cout << "+";
    for (size_t i = 0; i < resultats.size(); i++) {
      for (int j = 0; j < strategies[i]->nom().length() + 2; j++)
        cout << "-";
      cout << "+";
    }
    cout << "--------\n";
  }
  if (egalite)
    cout << "Egalite" << endl;
  else
    cout << "Strategie gagnante du tournoi: " << gagnant << endl;
}

void Tournoi::sauvegarder(const string& nomFichier) {
  ofstream f(nomFichier, ios::binary);
  int n = strategies.size();
  f.write((char*) &n, sizeof(int));
  for (size_t i = 0; i < resultats.size(); i++) {
    for (size_t j = 0; j < resultats[i].size(); j++) {
      f.write((char*) &resultats[i][j], sizeof(int));
    }
  }
}

bool Tournoi::charger(const string& nomFichier) {
  ifstream f(nomFichier, ios::binary);
  if (!f)
    return false;
  int n;
  f.read((char*) &n, sizeof(int));
  resultats.clear();
  resultats.resize(n);
  for (size_t i = 0; i < resultats.size(); i++) {
    resultats[i].resize(n);
  }
  for (size_t i = 0; i < resultats.size(); i++) {
    for (size_t j = 0; j < resultats[i].size(); j++) {
      f.read((char*) &resultats[i][j], sizeof(int));
    }
  }
  return true;
}