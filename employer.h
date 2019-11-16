#ifndef __EMPLOYER_H__
#define __EMPLOYER_H__

#include "point.h"
 
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
	private:
		Point position;
		int id;
		string name;
		//couleur coloration;
		int codeCouleur;
};

#endif
