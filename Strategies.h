#ifndef STRATEGIES_H
#define STRATEGIES_H

#include "IStrategie.h"
#include "Strategies/Gentille.h"
#include "Strategies/Mechante.h"
#include "Strategies/DonnantDonnant.h"
#include "Strategies/DonnantDonnantDur.h"
#include "Strategies/Mefiante.h"
#include "Strategies/Rancuniere.h"
#include "Strategies/PeriodiqueMechante.h"
#include "Strategies/PeriodiqueGentille.h"
#include "Strategies/MajoriteMou.h"
#include "Strategies/MajoriteDur.h"
#include "Strategies/Dur.h"
#include "Strategies/Sondeur4Coups.h"
#include "Strategies/DonnantDonnantAvecSeuil.h"
#include "Strategies/GraineDeChampion.h"

class Strategies {
public:
  static void Initializer();
  static void Liberer();

  static IStrategie* gentille;
  static IStrategie* mechante;
  static IStrategie* donnantDonnant;
  static IStrategie* donnantDonnantDur;
  static IStrategie* mefiante;
  static IStrategie* rancuniere;
  static IStrategie* periodiqueMechante;
  static IStrategie* periodiqueGentille;
  static IStrategie* majoriteMou;
  static IStrategie* majoriteDur;
  static IStrategie* dur;
  static IStrategie* sondeur4Coups;
  static IStrategie* donnantDonnantAvecSeuil;
  static IStrategie* graineDeChampion;
};

#endif