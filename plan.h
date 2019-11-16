#ifndef __PLAN_H__
#define __PLAN_H__

#include <iostream>
#include <vector>

#include "coord.h"
#include "carte.h"
#include "salle.h"

class Plan {
	public:
		Plan(Carte& _plan);
		void DessinerPlan1();
		Carte plan;
};

#endif
