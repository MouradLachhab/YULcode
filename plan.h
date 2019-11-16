#ifndef __PLAN_H__
#define __PLAN_H__

#include <iostream>
#include <vector>

#include "coord.h"
#include "carte.h"
#include "salle.h"

class Plan {
	public:
		Plan();
		std::vector<Salle> static DessinerPlan1(Carte&);
};

#endif
