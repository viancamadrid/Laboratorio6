#include <iostream>
#include "user.h"
#include "game.h"
#include <vector>

using std::cin;
using std::ednl;
using std::cout;
using std::vector;

int menu();

int main(int argc, char const *argv[]){
	vector<User> lista;
	int op=menu(lista);
	if(op==1){
		
	}
	return 0;
}

int menu(vector<User> lista){
	int opcion;
	cout<<"1.Agregar Usuario\n2.Modificar Usuario\n3.Eliminar un Usuario\n
	4.Agregar un Juego\n5.Eliminar un Juego\n6.Listar Usuarios\n7.Listar Juegos\nOpcion";
	cin>>opcion;
	if(opcion==2 && (lista.size()>0)){
		
	}
	return opcion;
}