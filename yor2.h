//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//#include <conio.h>

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;
int opcion;
double num;
int entero;

int ejercicio1()
{
	cout << "Ejercicio #1";
	cout << "\n";
	cout << "Ingrese un numero: ";
	cin >> num;
	if (!cin) {
		cout << "Numero no valido";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else {		
		if (num == 0)
			cout << num << ": es igual a cero";
		else
			if (num > 0)
				cout << num << ": es mayor que cero";
			else {
				cout << num << ": es menor que cero";
			}
	}
	return 0;
}
int ejercicio2()
{	
	cout << "Ejercicio #2";
	cout << "\n";
	cout << "Ingrese un numero: ";
	cin >> entero;
	if (entero % 2 == 0)
		cout << entero << ": ES PAR";
	else
		cout << entero << ": ES IMPAR";
	return 0;
}
int ejercicio3()
{
	cout << "Ejercicio #3";
	cout << "\n";
	for (int i = 100; i > -3; i--)
	{
		cout << i << endl;
	}
	return 0;
}
int ejercicio4()
{
	cout << "Ejercicio #4";
	cout << "\n";
	for (int i = 2; i <= 100; i += 2)
	{
		cout << i << endl;
	}
	return 0;
}
int ejercicio5()
{
	double promedio=0;
	double promacum=0;
	double nota=0;
	int i = 0;
	cout << "Ejercicio #5";
	cout << "\n";
	do
	{
		cout << "\n Ingrese nota: ";
		cin >> nota;
		if (nota > 0) {
			promedio = promedio + nota;
			promacum = promedio / (i + 1);
			cout << "\n promedio acumulado: " << promacum;
		}
		else {
			promedio = promedio / i;
			cout << "\n Promedio final: " << promedio;
		}
		i++;
	} while (nota > 0);
	return 0;
}
int ejercicio6()
{
	double multiplo=0;
	cout << "Ejercicio #6";
	cout << "\n";
	cout << "Multiplos de 2 entre 1 y 100:";
	cout << "\n";
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0) {
			cout << i << endl;
			multiplo = multiplo + 1;
		}
	}
	cout << "TOTAL Multiplos de 2 entre 1 y 100: " << multiplo;
	cout << "\n";
	multiplo = 0;
	cout << "Multiplos de 3 entre 1 y 100:";
	cout << "\n";
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0) {
			cout << i << endl;
			multiplo = multiplo + 1;
		}
	}
	cout << "TOTAL Multiplos de 3 entre 1 y 100: " << multiplo;
	return 0;
}
int ejercicio7()
{
	double numero1=0;
	double numero2=0;
	cout << "Ejercicio #7";
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero1;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero2;
	if (numero1 > numero2)
		cout << numero1 << " es  que " << numero2;
	else
		if (numero2 > numero1)
			cout << numero2 << " es mayor que " << numero1;
		else {
			cout << "numeros iguales";
		}
	cout << "\n";
	return 0;
}
int ejercicio8()
{
	double numero1 = 0;
	double numero2 = 0;
	cout << "Ejercicio #8";
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero1;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero2;
	if (numero1 < numero2)
		cout << numero1 << " es menor que " << numero2;
	else
		if (numero2 < numero1)
			cout << numero2 << " es menor que " << numero1;
		else {
			cout << "numeros iguales";
		}
	cout << "\n";
	return 0;
}
int ejercicio9()
{
	cout << "Ejercicio #9";
	cout << "\n";
	for (int i = 20; i <= 50; i++)
	{
		cout << i << endl;
	}
	cout << "\n";
	return 0;
}
int ejercicio10()
{
	cout << "Ejercicio #10";
	cout << "\n";
	double numero=0;
	double acumulado=0;
	int i = 0;
	do
	{
		cout << "\n Ingrese numero: ";
		cin >> numero;
		acumulado = acumulado + numero;
		cout << "\n Suma acumulada: " << acumulado;
		i++;
	} while (i < 15);
	cout << "\n";
	return 0;
}
int ejercicio11()
{
	cout << "Ejercicio #11";
	cout << "\n";
	int anion = 0;
	int mesn = 0;
	int dian = 0;
	int respFech = 0;
	int respMes = 0;
	int respdia = 0;
	cout << "Ingrese su anio de nacimiento en formato AAAA:";
	cin >> anion;
	cout << "Ingrese su mes de nacimiento en formato MM:";
	cin >> mesn;
	cout << "Ingrese su dia de nacimiento en formato DD:";
	cin >> dian;	
	//calcular fecha actual
	int fechahoy = 0;
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int mes = 1 + newtime.tm_mon;
	int anio = 1900 + newtime.tm_year;
	int dia = newtime.tm_mday;	
	string fechaactual ="";
	fechaactual = to_string(anio)+ to_string(mes)+ to_string(dia);	
	fechahoy = std::stoi(fechaactual);
	cout << "\n fecha actual: " << fechahoy;		
	//calcular edad	
	if (mes < mesn)
	{   //En caso de ser menor el mes actual que el nacimiento
		//dia = dia + 30; // Se le suma los 12 meses (1 año) al mes actual
		mes = mes + 12; // Se le suma los 12 meses (1 año) al mes actual
		anio = anio - 1; // Se le resta 1 año ( 12 meses) al año actual
		respMes = mes - mes; //Se le resta año nacimiento al actual
		respdia = (dia - dia); //Se le resta año nacimiento al actual
	}
	else { //En caso de ser mayor el mes actual que el nacimiento
		respMes = mes - mesn; //Se le resta año nacimiento al actual
		respdia = (dia - dian)*-1;
	}	
	int edad = anio - anion;
	if (edad >= 18) {
		if (dia > dian) {
		cout << "\n usted es mayor de edad:" << endl;
		cout << edad << " anios, " << respMes  << " meses " <<endl;
		cout << " y " << respdia << " dias";		
		}
		else {
			edad = edad - 1;
			cout << "\n  usted es menor de edad: " << endl;
			cout << edad << " anios y 11 meses " << endl;			
		}
	}
	else {		
		cout << "\n  usted es menor de edad: " << endl;
		cout << edad << " anios, " << respMes << " meses " << endl;
		cout << " y " << respdia << " dias";
	}
	cout << "\n";
	return 0;
}
int ejercicio12()
{
	cout << "Ejercicio #12";
	cout << "\n";
	return 0;
}
int ejercicio13()
{
	cout << "Ejercicio #13";
	cout << "\n";
	return 0;
}
int ejercicio14()
{
	cout << "Ejercicio #14";
	cout << "\n";
	return 0;
}
int ejercicio15()
{
	cout << "Ejercicio #15";
	cout << "\n";
	return 0;
}
int ejercicio16()
{
	cout << "Ejercicio #16";
	cout << "\n";
	return 0;
}
int ejercicio17()
{
	cout << "Ejercicio #17";
	cout << "\n";
	return 0;
}
int ejercicio18()
{
	cout << "Ejercicio #18";
	cout << "\n";
	return 0;
}
int ejercicio19()
{
	cout << "Ejercicio #19";
	cout << "\n";
	return 0;
}
int ejercicio20()
{
	cout << "Ejercicio #20";
	cout << "\n";
	return 0;
}
int ejercicio21()
{
	cout << "Ejercicio #21";
	cout << "\n";
	return 0;
}
int ejercicio22()
{
	cout << "Ejercicio #22";
	cout << "\n";
	return 0;
}
int ejercicio23()
{
	cout << "Ejercicio #23";
	cout << "\n";
	return 0;
}
int ejercicio24()
{
	cout << "Ejercicio #24";
	cout << "\n";
	return 0;
}
int ejercicio25()
{
	cout << "Ejercicio #25";
	cout << "\n";
	return 0;
}
int ejercicio26()
{
	cout << "Ejercicio #26";
	cout << "\n";
	return 0;
}
int ejercicio27()
{
	cout << "Ejercicio #27";
	cout << "\n";
	return 0;
}
int ejercicio28()
{
	cout << "Ejercicio #28";
	cout << "\n";
	return 0;
}
int ejercicio29()
{
	cout << "Ejercicio #29";
	cout << "\n";
	return 0;
}
int ejercicio30()
{
	cout << "Ejercicio #30";
	cout << "\n";
	return 0;
}
int ejercicio31()
{
	cout << "Ejercicio #31";
	cout << "\n";
	return 0;
}
int ejercicio32()
{
	cout << "Ejercicio #32";
	cout << "\n";
	return 0;
}
int ejercicio33()
{
	cout << "Ejercicio #33";
	cout << "\n";
	return 0;
}
int ejercicio34()
{
	cout << "Ejercicio #34";
	cout << "\n";
	return 0;
}
int ejercicio35()
{
	cout << "Ejercicio #35";
	cout << "\n";
	return 0;
}
int ejercicio36()
{
	cout << "Ejercicio #36";
	cout << "\n";
	return 0;
}
int ejercicio37()
{
	cout << "Ejercicio #37";
	cout << "\n";
	return 0;
}
int ejercicio38()
{
	cout << "Ejercicio #38";
	cout << "\n";
	return 0;
}
int ejercicio39()
{
	cout << "Ejercicio #39";
	cout << "\n";
	return 0;
}
int ejercicio40()
{
	cout << "Ejercicio #40";
	cout << "\n";
	return 0;
}
int ejercicio41()
{
	cout << "Ejercicio #41";
	cout << "\n";
	return 0;
}
int ejercicio42()
{
	cout << "Ejercicio #42";
	cout << "\n";
	return 0;
}
int ejercicio43()
{
	cout << "Ejercicio #43";
	cout << "\n";
	return 0;
}
int ejercicio44()
{
	cout << "Ejercicio #44";
	cout << "\n";
	return 0;
}
int ejercicio45()
{
	cout << "Ejercicio #45";
	cout << "\n";
	return 0;
}
int ejercicio46()
{
	cout << "Ejercicio #46";
	cout << "\n";
	return 0;
}
int ejercicio47()
{
	cout << "Ejercicio #47";
	cout << "\n";
	return 0;
}
int ejercicio48()
{
	cout << "Ejercicio #48";
	cout << "\n";
	return 0;
}
int ejercicio49()
{
	cout << "Ejercicio #49";
	cout << "\n";
	return 0;
}
int ejercicio50()
{
	cout << "Ejercicio #50";
	cout << "\n";
	return 0;
}
int main() {
	do
	{
		cout << "\n Digite el numero de ejercicio que desea ver o cero(0) para salir:";
		cin >> opcion;
		if (!cin) {
			cout << "Numero no valido - Saliendo de la aplicación";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
			switch (opcion)
			{
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 3:
				ejercicio3();
				break;
			case 4:
				ejercicio4();
				break;
			case 5:
				ejercicio5();
				break;
			case 6:
				ejercicio6();
				break;
			case 7:
				ejercicio7();
				break;
			case 8:
				ejercicio8();
				break;
			case 9:
				ejercicio9();
				break;
			case 10:
				ejercicio10();
				break;
			case 11:
				ejercicio11();
				break;
			case 12:
				ejercicio12();
				break;
			case 13:
				ejercicio13();
				break;
			case 14:
				ejercicio14();
				break;
			case 15:
				ejercicio15();
				break;
			case 16:
				ejercicio16();
				break;
			case 17:
				ejercicio17();
				break;
			case 18:
				ejercicio18();
				break;
			case 19:
				ejercicio19();
				break;
			case 20:
				ejercicio20();
				break;
			case 21:
				ejercicio21();
				break;
			case 22:
				ejercicio22();
				break;
			case 23:
				ejercicio23();
				break;
			case 24:
				ejercicio24();
				break;
			case 25:
				ejercicio25();
				break;
			case 26:
				ejercicio26();
				break;
			case 27:
				ejercicio27();
				break;
			case 28:
				ejercicio28();
				break;
			case 29:
				ejercicio29();
				break;
			case 30:
				ejercicio30();
				break;
			case 31:
				ejercicio31();
				break;
			case 32:
				ejercicio32();
				break;
			case 33:
				ejercicio33();
				break;
			case 34:
				ejercicio34();
				break;
			case 35:
				ejercicio35();
				break;
			case 36:
				ejercicio36();
				break;
			case 37:
				ejercicio37();
				break;
			case 38:
				ejercicio38();
				break;
			case 39:
				ejercicio39();
				break;
			case 40:
				ejercicio40();
				break;
			case 41:
				ejercicio41();
				break;
			case 42:
				ejercicio42();
				break;
			case 43:
				ejercicio43();
				break;
			case 44:
				ejercicio44();
				break;
			case 45:
				ejercicio45();
				break;
			case 46:
				ejercicio46();
				break;
			case 47:
				ejercicio47();
				break;
			case 48:
				ejercicio48();
				break;
			case 49:
				ejercicio49();
				break;
			case 50:
				ejercicio50();
				break;
			case 0: cout << "\n Saliendo de la aplicación";
				break;
			default: cout << "Opción incorrecta - Digite un numero entre 1 y 50";
			}
		}
		} while (opcion != 0);	
	//cout << "\n";	
	//cin.ignore();
	//cin.get();	
	return 0;

}

