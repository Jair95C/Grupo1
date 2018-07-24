using namespace std;
class Masajista: public Integrante{
	string titulacion,aniosExperiencia;
	
	public:
		Masajista(){
		}
		Masajista(string titulacion, string aniosExperiencia):Integrante(id, nombre,apellidos,edad){
			this->titulacion=titulacion;
			this->aniosExperiencia=aniosExperiencia;
		}
		string getTitulacion(){return titulacion;}
		string getAniosExperiencia(){return aniosExperiencia;}
		
		void setTitulacion(string titulacion){this->titulacion=titulacion;}
		void setAniosExperiencia(string aniosExperiencia){this->aniosExperiencia=aniosExperiencia;}
		
		void ingresar(){
			string id,nombre,apellidos;
			int edad;
			cout<<"Ingrese los datos del Masajista"<<endl;
			cout<<"Id:";cin>>id;
			cout<<"Nombre:";cin>>nombre;
			cout<<"Apellido:";cin>>apellidos;
			cout<<"Edad:";cin>>edad;
			cout<<"Titulacion:";cin>>titulacion;
			cout<<"Anios de experiencia:";cin>>aniosExperiencia;
			this->setId(id);
			this->setNombre(nombre);
			this->setApellidos(apellidos);
			this->setEdad(edad);

		}
		void imprimir(){
			cout<<"Datos del masajista"<<endl;
			cout<<"ID:"<<this->getId()<<endl;
			cout<<"Nombre:"<<this->getNombre()<<endl;
			cout<<"Apellido:"<<this->getApellidos()<<endl;
			cout<<"Edad:"<<this->getEdad()<<endl;
			cout<<"Titulacion:"<<titulacion<<endl;
			cout<<"Anios de experiencia:"<<aniosExperiencia<<endl;			
		}
};


