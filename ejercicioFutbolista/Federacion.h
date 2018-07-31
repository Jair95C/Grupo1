#include <iostream>
using namespace std;
class Federacion{
	string id,nombre;
	public:
		Federacion(){}
		Federacion(int id,string nombre){
			this->id=id;
			this->nombre=nombre;
		}
		string getId(){return id;}
		void setId(string id){this->id=id;}
		string getNombre(){return nombre;}
		void setNombre(string nombre){this->nombre=nombre;}

};

