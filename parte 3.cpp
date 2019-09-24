#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo{
	int valor;
	Nodo *ptr;
	Nodo(int dato1){
		valor = dato1;
		ptr = NULL;
	}
};

void agregar(int);
void mostrar();
struct Nodo *lista=NULL;
int main(int argc, char** argv) {

	    int opcion, add;
	    while(opcion!=3){

	    cout <<      "MENU" << endl;
        cout << "\t1  LlENAR NODOS " << endl;
        cout << "\t2  MOSTRAR NODOS " << endl;
        cout << "\t3  SALIR" << endl;
        cout << "ELIJE OPCION: ";
        cin >> opcion;

        	switch(opcion)
		{
			case 1:
				  cout << "LLENAR NODOS: " << endl;
				  cin>>add;
				  agregar(add);
				break;

			case 2:
				    cout << " MOSTRAR NODOS: " << endl;
				    mostrar();
				break;

			case 3:
				system("cls");
				cout << "ADIOS.\n";
				system(" pause");
				break;

}
}

	 return 0;

}
void agregar( int add)
{
   Nodo *nuevo = new Nodo(0);
   nuevo->ptr=NULL;
   nuevo->valor=add;
   if(lista==NULL)lista=nuevo;
   else{
   	Nodo *aux=lista;
   	while(aux->ptr!=NULL){
   		aux=aux->ptr;

	   }
	   aux->ptr=nuevo;
   }

}
void mostrar()
{
   Nodo *aux;
   aux=lista;
   while(aux!=NULL){
   		cout<<aux->valor<<" ";
   		aux=aux->ptr;
	   }
	  cout<<endl;
   }
