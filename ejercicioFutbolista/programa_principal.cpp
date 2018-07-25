#include <iostream>
#include <list>
#include "Integrante.h"
#include "Futbolista.h"
#include "Masajista.h"
#include "Federacion.h"


using namespace std;

int menu(){
system("cls");
cout<<"**Menu**\n";
cout<<"1.-Ingresar nuevo\n";
cout<<"2.-Imprimir\n"; 
cout<<"3.-Eliminar\n"; 
cout<<"99.-Salir\n";
cout<<"Escoja la opcion:";
int op;
cin>>op;
return op;
}

//..............
void imprimir(list<Integrante *> &integrantes){
for(list<Integrante *>::iterator indice= integrantes.begin();
indice!=integrantes.end(); ++indice
){
(*indice)->imprimir();
} 
}
//..................
void nuevo(list<Integrante *> &lista){
Integrante * objInt=new Integrante();
objInt->leer();
lista.push_back(objInt);
}
//.................................
Integrante* buscar(list<Integrante *> lista, int ideBuscar){   //cod buscar =ide buscar
Integrante * ideEncontrado=NULL;
list<Integrante*>::iterator pos;
pos=lista.begin();                        //depEncontrado= int ideEncontrado
while(pos!=lista.end() && ideEncontrado==NULL){
if((*pos)->getId()==ideBuscar ){
ideEncontrado=(*pos);
}
pos++;
}
return ideEncontrado;
}
/////////////////////////////////////

int main(int argc, char** argv) {
list<Integrante *> integrantes; 
int op=0;
string ideBuscar;
Integrante* ideBuscar=NULL;
      do{
         op=menu();
              switch(op){
                   case 1: 
                      nuevo(integrantes);
                       break;
                    case 2:
                     imprimir(integrantes);
                       break; 
                   case 3: 
                       cout<<"Ingrese el la identificacion a eliminar:";
                        cin>>ideBuscar;
                        ideBuscar=buscar(integrantes,ideBuscar);
                          if(ideBuscar!=NULL){ 
                             integrantes.remove(ideBuscar);
                              cout<<"\nIntegrante  Eliminado!!\n";
                           }else{
                           cout<<"\nIntegrante NO encontrado!!\n";
                               } 
                             break; 
                   case 99:
                        cout<<"Hasta pronto!!";
						break; 
						default:
							cout<<"Opcion desconocida!!";
                           break; 
                          }
                                system("pause"); 
                         }while(op!=99); 
        return 0;
}
