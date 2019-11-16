#ifndef __EMPLOYER_H__
#define __EMPLOYER_H__

#include "coord.h"
 
using namespace std;

/*typedef enum couleur couleur;
enum couleur
{
	int code;
	string nom;
};*/


class Employer {
	
	public:
		Employer(int _id, string _name, int _codeCouleur);
		Coord position;
	private:
		int id;
		string name;
		//couleur coloration;
		int codeCouleur;
};

#endif
