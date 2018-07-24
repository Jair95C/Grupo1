using namespace std;

class Integrante{
	protected.
	string id;
	string nombre;
	string apellidos;
	int edad;
	public:
		Integrante(){
		}
		Integrante(string id, string nombre, string apellidos, int edad){
			this->id=id;
			this->nombre=nombre;
			this->apellidos=apellidos;
			this->edad=edad;
		}
		//Metodos set y get
		string getId(){
			return id;
		}
		string getNombre(){
			return nombre;
		}
		string Apellidos(){
			return apellidos;
		}
		int getEdad(){
			return edad;
		}
		 
		void setId(string id){
			this->id=id;
		}
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		void setApellidos(string apellidos){
			this->apellidos=apellidos;
		}
		void setEdad(int edad){
			this->edad=edad;
		}
		//operacionesd
		virtual void leer()=0;
		virtual void imprimir()=0;
};

