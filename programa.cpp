#include <iostream>
#include <fstream>
#include <cctype>
#include <string.h>
#include <ctime>
#include <lib/libssh-0.10.0/include/libssh/libssh.h>

using namespace std;
string hora();
string direc();
struct informacion;
bool comprobation();

int main()
{
	ssh_session my_session_ssh;
	my_session_ssh = ssh_new();


	string direccion;
	char a;
	fstream log;
	int b = 0;
	do
	{
		cout << "ingrese una opcion:";
		cin >> b;
		
		switch (b)
		{
		case 1:
			direccion=direc();
			cout << direccion;
			break;
		case 2:
			break;
		}
	} while (b != 999);
}



string hora() {
	std::time_t result = std::time(nullptr);
	return std::asctime(std::localtime(&result));
}
struct informacion
{
	string usuario;
	string direccion;
	int puerto = 22;
};

string direc(){
	string direct = "peron";
	informacion informacion;
	cout << "ingresar datos\n ingrese su usuario:";
	cin >> informacion.usuario;
	system("clear");
	cout << "ingresar direccion:\n"<< informacion.usuario << "@";
	cin >> informacion.direccion;
	do
	{
		cout << "ingrese puerto (No ingrese nada si desea usar el puerto determinado):";
		cin >> informacion.puerto;
		
		if (!cin.good())
		{
			cin.ignore();	
			cin.clear();
		}

	} while (true);

	return direct;
}

bool comprobation() {
	return true;
}