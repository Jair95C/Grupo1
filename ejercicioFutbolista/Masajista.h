using namespace std;
class Masajista{
	string titulacion,aniosExperiencia;
	
	public:
		Masajista(){
		}
		Masajista(string titulacion, string aniosExperiencia){
			this->titulacion=titulacion;
			this->aniosExperiencia=aniosExperiencia;
		}
		string getTitulacion(){return titulacion;}
		string getAniosExperiencia(){return aniosExperiencia;}
		
		void setTitulacion(string titulacion){this->titulacion=titulacion;}
		void setAniosExperiencia(string aniosExperiencia){this->aniosExperiencia=aniosExperiencia;}
		
};
