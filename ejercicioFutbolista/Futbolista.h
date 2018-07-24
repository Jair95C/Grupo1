using namespace std;
class Futbolista: public Integrante{
	string dorsal,desmarcacion;
	
	public:
		Futbolista(){
		}
		Futbolista(string dorsal, string desmarcacion):Integrante(id,nombre,apellidos,edad){
			this->dorsal=dorsal;
			this->desmarcacion=desmacacion;
		}
		string getDorsal(){return dorsal;}
		string getDorsal(){return desmarcacion;}
		
		void setDorsal(string dorsal){this->dorsal=dorsal;}
		void setDesmarcacion(string desmarcacion){this->desmarcacion=desmarcacion;}
		
		void ingresar();
		void imprimir ();
	
};

void Futbolista::ingresar(){
	
	string nombre,apellidos,edad,id;
	cout<<"--Ingrese los Datos del futbolista--"<<endl;
	cout<<"--Id--"; cin>>id;
	cout<<"--Nombre--"; cin>>nombre;
	cout<<"--Apellido--"; cin>>apellidos;
	cout<<"--Edad--"; cin>>edad;
	cout<<"--Dorsal--"; cin>>dorsal;
	cout<<"--Desmarcacion--"; cin>>desmarcacion;
	
	this->setId(string id);
	this->setNombre(string nombre);
	this->setApellidos(string apellidos);
	this->setEdad(int edad);
}

void Futbolista::imprimir(){
	cout<<"--Datos del futbolista--"<<endl;
	cout<<"--Id--"<<this->getId()<<endl;
	cout<<"--Nombre--"<<this->getNombre()<<endl;
	cout<<"--Apellido--"this->getApellidos()<<endl;
	cout<<"--Edad--"this->getEdad()<<endl;
	cout<<"--Dorsal--"<<dorsal<<endl;
	cout<<"--Desmarcacion--"<<desmarcacion<<endl;
	
}
