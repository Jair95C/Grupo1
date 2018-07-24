using namespace std;
class Federacion: public Integrante{
	int id;
	string nombre;
	
	public:
		Federacion(){
		}
		Federacion(int id, string nombre):Integrante(id,nombre,apellido,edad){
			this->id=id;
			this->nombre=nombre;
		}
		int getId(){return id;}
		string getNombre(){return nombre;}
		
		void setId(int id){this->id=id;}
		void setNombre(string nombre){this->nombre=nombre;}
		
	void ingresar(){
			string apellidos;
			int edad;
			cout<<"Ingrese los datos del Entrenador"<<endl;
			cout<<"Id:";cin>>id;
			cout<<"Nombre:";cin>>nombre;
			cout<<"Apellido:";cin>>apellidos;
			cout<<"Edad:";cin>>edad;
			
			this->setApellidos(apellidos);
			this->setEdad(edad);

		}
		void imprimir(){
			cout<<" Datos del Entrenador"<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"Nombre:"<<nombre<<endl;
			cout<<"Apellido:"<<this->getApellidos()<<endl;
			cout<<"Edad:"<<this->getEdad()<<endl;
						
		}
};
