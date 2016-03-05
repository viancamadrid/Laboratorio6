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
void crearUsuario(vector<User>);
void eliminarUsuario(vector<User>);
void crearJuego(vector<Game>);
void eliminarJuego(vector<Game>);
void listarUsuario(vector<User>);
void listarJuego(vector<Game>);

int main(int argc, char const *argv[]){
	vector<User> lista;
	vector<Game> juegos;
	int op=menu(lista);	
	while(op!=8){
		if(op==0){
			op=menu(lista);
		}
		if(op==1){
			crearUsuario(lista);
		}else if(op==3){
			eliminarUsuario(lista);
		}else if(op==4){
			crearJuego(juegos);
		}else if(op==5){
			eliminarJuego(juegos);
		}else if(op==6){

		}else if(op==7){

		}
		int op=menu(lista);
	}
	return 0;
}

int menu(vector<User> lista){
	int opcion;
	cout<<"\n\n1.Agregar Usuario\n2.Modificar Usuario\n3.Eliminar un Usuario\n4.Agregar un Juego\n5.Eliminar un Juego\n6.Listar Usuarios\n7.Listar Juegos\n8.Salir\nOpcion: ";
	cin>>opcion;
	if(opcion==2 && (lista.size()>0)){
		string usuario, contra;
		cout<<"Ingresar Usuario: ";
		cin>>usuario;
		cout<<"Ingresar Password: ";
		cin>>contra;
		bool continuar=false;
		for (int i = 0; i < lista.size(); ++i){
			if((lista.at(i).getUserName().compare(usuario)==0) && (lista.at(i).getPassword().compare(contra)==0)){
				continuar=true;
			}
		}
		if(continuar){
			cout<<"\n9.Agregar Juego\n10.Eliminar Juego\n11.Cambiar Password\nOpcion: ";
			cin>>opcion;
		}else{
			cout<<"\nUSUARIO NO EXISTE, NO PUEDE ACCEDER!"<<endl;
			opcion=0;
		}
	}
	return opcion;
}

void crearUsuario(vector<User> lista){
	string usuario, contra;
	cout<<"Ingresar Usuario: ";
	cin>>usuario;
	cout<<"Ingresar Password: ";
	cin>>contra;
	for (int i = 0; i < lista.size(); ++i){
		if(lista.at(i).getUserName().compare(usuario)==0){
			cout<<"\nEl Usuario Ya Existe!"<<endl;
			bool cambio=true;
			while(cambio){
				cout<<"Ingrese otro Usuario: ";
				cin>>usuario;
				if(lista.at(i).getUserName().compare(usuario)==0){
					cout<<"El Usuario Ya Existe!"<<endl;;
				}else{
					cambio=false;
				}
			}
		}
	}
	User newuser(usuario,contra);
	lista.push_back(newuser);
	cout<<"\nUSUARIO CREADO!"<<endl;
}

void eliminarUsuario(vector<User> lista){
	for (int i = 0; i < lista.size(); ++i){
		cout<<"Posicion: "<<i<<" "<<lista.at(i).toString()<<endl;
	}
	int posicion;
	cout<<"Posicion a Eliminar: ";
	cin>>posicion;
	lista.erase(lista.begin()+posicion);
	cout<<"\nUSUARIO ELIMINADO!"<<endl;
	return;
}

void crearJuego(vector<Game> juegos){
	int id, year;
	string name, developers, genre;
	cout<<"Ingrese ID: ";
	cin>>id;
	for (int i = 0; i < juegos.size(); ++i){
		if(juegos.at(i).getId()==id){
			cout<<"\nEl ID del juego ya existe!"<<endl;
			bool cambio=true;
			while(cambio){
				cout<<"Ingrese otro ID: ";
				cin>>id;
				if(juegos.at(i).getId()==id){
					cout<<"El ID del juego ya existe!"<<endl;;
				}else{
					cambio=false;
				}
			}
		}	
	}
	cout<<"Ingrese Nombre: ";
	cin>>name;
	cout<<"Ingrese Año: ";
	cin>>year;
	cout<<"Ingrese Developers: ";
	cin>>developers;
	cout<<"Ingrese Genre: ";
	cin>>genre;
	Game newgame(id,name,year,developers,genre);
	juegos.push_back(newgame);
	cout<<"\nJUEGO AGREGADO!"<<endl;
	return;
}

void eliminarJuego(vector<Game> juegos){
	for (int i = 0; i < juegos.size(); ++i){
		cout<<"Posicion: "<<i<<" "<<juegos.at(i).toString()<<endl;
	}
	int posicion;
	cout<<"Posicion a Eliminar: ";
	cin>>posicion;
	juegos.erase(juegos.begin()+posicion);
	cout<<"\nJUEGO ELIMINADO!"<<endl;
	return;
}

void listarUsuario(vector<User> lista){
	cout<<"\n\n---LISTA DE USUARIOS---"<<endl;
	for (int i = 0; i < lista.size(); ++i){
		cout<<lista.at(i).toString()<<endl;
	}
	return;
}

void listarJuego(vector<Game> juegos){
	cout<<"\n\n---LISTA DE JUEGOS---"<<endl;
	for (int i = 0; i < juegos.size(); ++i){
		cout<<juegos.at(i).toString()<<endl;
	}
	return;
}