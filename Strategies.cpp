#include "Strategies.h"

IStrategie* Strategies::gentille = nullptr;
IStrategie* Strategies::mechante = nullptr;
IStrategie* Strategies::donnantDonnant = nullptr;
IStrategie* Strategies::donnantDonnantDur = nullptr;
IStrategie* Strategies::mefiante = nullptr;
IStrategie* Strategies::rancuniere = nullptr;
IStrategie* Strategies::periodiqueMechante = nullptr;
IStrategie* Strategies::periodiqueGentille = nullptr;
IStrategie* Strategies::majoriteMou = nullptr;
IStrategie* Strategies::majoriteDur = nullptr;
IStrategie* Strategies::dur = nullptr;
IStrategie* Strategies::sondeur4Coups = nullptr;
IStrategie* Strategies::donnantDonnantAvecSeuil = nullptr;
IStrategie* Strategies::graineDeChampion = nullptr;

void Strategies::Initializer() {
  gentille = new Gentille();
  mechante = new Mechante();
  donnantDonnant = new DonnantDonnant();
  donnantDonnantDur = new DonnantDonnantDur();
  mefiante = new Mefiante();
  rancuniere = new Rancuniere();
  periodiqueMechante = new PeriodiqueMechante();
  periodiqueGentille = new PeriodiqueGentille();
  majoriteMou = new MajoriteMou();
  majoriteDur = new MajoriteDur();
  dur = new Dur();
  sondeur4Coups = new Sondeur4Coups();
  donnantDonnantAvecSeuil = new DonnantDonnantAvecSeuil();
  graineDeChampion = new GraineDeChampion();
}

void Strategies::Liberer() {
  delete gentille;
  delete mechante;
  delete donnantDonnant;
  delete donnantDonnantDur;
  delete mefiante;
  delete rancuniere;
  delete periodiqueMechante;
  delete periodiqueGentille;
  delete majoriteMou;
  delete majoriteDur;
  delete dur;
  delete sondeur4Coups;
  delete donnantDonnantAvecSeuil;
  delete graineDeChampion;
}