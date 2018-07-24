using namespace std;
class Futbolista{
	string dorsal,desmarcacion;
	
	public:
		Futbolista(){
		}
		Futbolista(string dorsal, string desmarcacion){
			this->dorsal=dorsal;
			this->desmarcacion=desmacacion;
		}
		string getDorsal(){return dorsal;}
		string getDorsal(){return desmarcacion;}
		
		void setDorsal(string dorsal){this->dorsal=dorsal;}
		void setDesmarcacion(string desmarcacion){this->desmarcacion=desmarcacion;}
		
	
};
