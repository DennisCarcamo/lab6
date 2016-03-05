
#include "user.h" 
#include "Game.h"
#include <cstring>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char* const argv[]){
	vector <User> listausuarios;
	vector <Game> listagames;
	int opcion=0;
	while (opcion!=8){
		cout<<"1-Agregar Usuario"<<endl
			<<"2-Modificar Usuario"<<endl
			<<"3-Eliminar Usuario"<<endl
			<<"4-Agregar un juego"<<endl
			<<"5-Eliminar un juego"<<endl
			<<"6-Listar Usuario"<<endl
			<<"7-Listar Juegos"<<endl
			<<"8- Salir"<<endl;

		cin>>opcion;
		if (opcion==1){
			string nombre,pasword;
			User usuario(nombre,pasword);
			listausuarios.push_back(usuario);
		}else if (opcion==2){
			string nomb,contra;
			cout<<"Ingrese su nombre de usuario"<<endl;
			cin>>nomb;
			cout<<"Ingrese su contrasena"<<endl;
			cin>>contra;
			int opcion2;
			for (int i = 0; i < listausuarios.size(); i++){
		 		if (nomb.compare((listausuarios.at(i)).getUsername())==0 || contra.compare(listausuarios.at(i).get_password())){
		 			
					cout<<"1-Agregar Juego"<<endl
						<<"2-Eliminar Juego"<<endl
						<<"3-Cambiar contrasena"<<endl;
						cin>>opcion2;
				
			}}

			
		}else if (opcion==3) {
			int opc;
			for (int i = 0; i <listausuarios.size(); i++){
				cout<< i << (listausuarios.at(i)).toString()<<endl;
			}
			cin>>opc;
			if (opc>=0 && opc<=listausuarios.size()){
				 listagames.erase(listagames.begin()+opc);
				 cout<<"Eliminado"<<endl;
			}else{
				cout<<"no existes ese indice"<<endl;
			}
	 
		}else if (opcion==4) {
			int id,year;
			string name, genre, developers;
			cout<<"Ingrese el id del juego"<<endl;
			cin>>id;
			cout<<"Ingrese el ano del juego"<<endl;
			cin>>year;
			cout<<"Ingrese el nombre del juego"<<endl;
			cin>>year;
			cout<<"Ingrese el genero"<<endl;
			cin>>genre;
			cout<<"Ingrese el desarrollador"<<endl;
			cin>>developers;
			bool existe=true;
			for (int i = 0; i < listagames.size(); ++i){
				 if(listagames.at(i).getId()==id){
				 	cout<<"no se puede agregar, este juego ya existe"<<endl;
				 	existe=true;
				}else{
					existe=false;
				}
			}

			if(existe){
				cout<<"ya existe este juego"<<endl;
			}else{
				Game juego(id,name,year,developers,genre);
				listagames.push_back(juego);
				cout<<"agregado"<<endl;
			}
	 
		}else if (opcion==5) {
			int opc;
			for (int i = 0; i < listagames.size(); i++){
				cout<<listagames.at(i).toString();
			}
			cout<<"Ingrese el juego que desea eliminar"<<endl;
			cin>>opc;
			if (opc<=listagames.size() && opc>0){
				listagames.erase(listagames.begin()+opc);
				cout<<"Eliminado"<<endl;
			}else{
				cout<<"no existe ese index"<<endl;
			}
	 
		}else if (opcion==6) {
	 		for (int i = 0; i < listausuarios.size(); i++){
	 			cout<<listausuarios.at(i).toString();
	 		}
		}else if (opcion==7) {
	 		for (int i = 0; i < listagames.size(); i++){
	 			//cout<<listagames.at(i).toString();
	 		}
		}

	}
	return 0;
}