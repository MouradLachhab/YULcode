#ifndef __EMPLOYER_H__
#define __EMPLOYER_H__

#include "coord.h"

/*typedef enum couleur couleur;
enum couleur
{
	int code;
	string nom;
};*/


class Employer {

	public:
		Employer(int _id, std::string _name, int _codeCouleur);
		Coord position;
	private:
		int id;
		std::string name;
		//couleur coloration;
		int codeCouleur;
};

#endif
