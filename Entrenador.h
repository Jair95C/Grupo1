using namespace std;

class Entrenador Public: Integrante{
	Federacion federacion;	
	
	public:
	Entrenador(){		}
	Entrenador(int id,string nombre, string apellido,int edad,Federacion federacion):Integrante(id,nombre,apellido,edad){
		this->federacion=federacion;	
		
	}
		//me tood de set y get
		
		Federacion getFederacion(){return this->federacion;		}
		
		
		
		void setFederacion(Federacion federacion){this->federacion=federacion;}	
		
		
			
};


