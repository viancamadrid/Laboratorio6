#include <iostream>
#include "user.h"
#include "game.h"
#include <vector>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::vector;
using std::string;
using std::getline;

int menu(vector<User>);

int main(int argc, char const *argv[]){
	vector<User> lista;
	int op=menu(lista);
	if(op==1){
		string usuario, contra;
		cout<<"Ingresar Usuario: ";
		getline(cin,usuario);
		cout<<"Ingresar Password: ";
		getline(cin,contra);
		for (int i = 0; i < lista.size(); ++i){
			if(lista.at(i).getUserName().compare(usuario)==0){
				cout<<"El Usuario Ya Existe!"<<endl;
				bool cambio=true;
				while(cambio){
					cout<<"Ingrese otro Usuario: ";
					getline(cin,usuario);
					if(lista.at(i).getUserName().compare(usuario)==0){
						cout<<"El Usuario Ya Existe!"<<endl;;
					}else{
						cambio=false;
					}

				}
			}
		}
		User nuevo(usuario,contra);
		lista.push_back(nuevo);
		cout<<"USUARIO CREADO!"<<endl;
	}
	return 0;
}

int menu(vector<User> lista){
	int opcion;
	cout<<"1.Agregar Usuario\n2.Modificar Usuario\n3.Eliminar un Usuario\n4.Agregar un Juego\n5.Eliminar un Juego\n6.Listar Usuarios\n7.Listar Juegos\nOpcion: ";
	cin>>opcion;
	if(opcion==2 && (lista.size()>0)){
		string usuario, contra;
		cout<<"Ingresar Usuario: ";
		getline(cin,usuario);
		cout<<"Ingresar Password: ";
		getline(cin,contra);

	}
	return opcion;
}