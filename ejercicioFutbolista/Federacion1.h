using namespace std;

class Federacion{
	int id;
	string nombre;
	
	
	public:
	Federacion(){		}
	Federacion(int id , string nombre){
		this->id=id;
		this->nombre=nombre;
	
		
	}
		//me tood de set y get
		
		int getId(){return this->id;		}
		string getNombre(){return this->nombre;		}
		
		
		
		void setId(int id){this->id=id;}
		void setNombre(string nombre){this->nombre=nombre;}
		
		
		
		void leer();
    	void imprimir();		
};

void Federacion:: leer(){
	
	cout<<"Ingreso datos de Federacion: "<<endl;
	cout<<"Id : ";cin>>id;
	cout<<"Nombre :";cin>>nombre;
	
		
}

void Federacion :: imprimir(){
	cout<<"Impresion datos de Federeacion  "<<endl;
	cout<<"Id : "<<id<<endl;
	cout<<"Nombre : "<<nombre<<endl;
}
