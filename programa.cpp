#include<iostream>
#include<fstream>
#include<string.h>
#include<ctime>
using namespace std;

int main()
{
	char a;
	string bin="#!/bin/bash",linea;
	string direccion="bandit",nivel="0";
	ofstream script;
	fstream log;
	int b=0;
	string fecha="-";
	do{
	cout<<"ingrese un dato:";
	cin>>b;
	switch (b)
	{
	case 1:
		script.open("conexion.sh",ios::out);
		log.open("log.txt",ios::out);
		cout<<"ingrese a que nivel de bandit:";
		cin>>nivel;
		fecha=system("date");
		direccion="ssh bandit"+nivel+"@bandit.labs.overthewire.org -p 2220";
		cout<<"direccion:"<<direccion<<endl;
		script << bin <<"\n"<<direccion;
		log << time() << " " << direccion;
		log.close();
		script.close();
		system("./conexion.sh");
	break;
	case 2:
		log.open("log.txt",ios::in);
		while(getline(log,linea))
		{
			cout<<linea<<endl;
		}
		log.close();
	break;
	}
	}while(b!=999);
}
