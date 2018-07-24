using namespace std;
class Federacion{
	int id;
	string nombre;
	
	public:
		Federacion(){
		}
		Federacion(int id, string nombre){
			this->id=id;
			this->nombre=nombre;
		}
		int getId(){return id;}
		string getNombre(){return nombre;}
		
		void setId(int id){this->id=id;}
		void setNombre(string nombre){this->nombre=nombre;}
		
	
};
