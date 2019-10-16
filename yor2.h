//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//#include <conio.h>

//#include "pch.h"
#include <iostream>
#include <ctime>
#include <cmath>
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
	//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
	double promedio = 0;
	double promacum = 0;
	double nota = 0;
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
	double multiplo = 0;
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
	double numero1 = 0;
	double numero2 = 0;
	cout << "Ejercicio #7";
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero1;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero2;
	if (numero1 > numero2)
		cout << numero1 << " es  mayor que " << numero2;
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
	int totalsuma = 0;
	cout << "Ejercicio #9";
	cout << "\n";
	for (int i = 20; i <= 50; i++)
	{
		cout << i << endl;
		totalsuma = i + totalsuma;
	}
	cout << "\n";
	return 0;
}
int ejercicio10()
{
	cout << "Ejercicio #10";
	cout << "\n";
	double numero = 0;
	double acumulado = 0;
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
	int a;// fecha de nacimiento
	int b;//año actual 
	cout << "Digite su anio de nacimiento :";
	cin >> a;
	b = 2019;
	b = b - a;
	if (b >=18)
		{
			cout << "Persona es mayor de edad";
		}
	else
		{
			cout << "Persona es menor de edad";
		}	
	return 0;
}
int ejercicio12()
{
	cout << "Ejercicio #12";
	cout << "\n";
	
		double numero1 = 0;
		double numero2 = 0;
		double numero3 = 0;
		cout << "\n";
		cout << "ingrese un numero:";
		cin >> numero1;
		cout << "\n";
		cout << "ingrese un numero:";
		cin >> numero2;
		cout << "ingrese un numero:";
		cin >> numero3;
		if (numero1 > numero2) {
			if (numero1 > numero3) {
				cout << numero1;
				if (numero2 > numero3) {
					cout << numero2;
					cout << numero3;
				}
				else {
					cout << numero3;
					cout << numero2;
				}
			}
			else {
				cout << numero3;
				cout << numero1;
				cout << numero2;
			}
		}
		else{
			if (numero2> numero3) {
				if (numero1 > numero3) {
					cout << numero2;
					cout << numero1;
					cout << numero3;
				}
				else {
					cout << numero2;
					cout << numero3;
					cout << numero1;
				}


			}
			
			else {
			        cout << numero3;
					cout << numero2;
					cout << numero1;

			}
		   }
		cout << "\n";

	
	return 0;
}
int ejercicio13()
{
	cout << "Ejercicio #13";

	double numero1 = 0;
	double numero2 = 0;
	double numero3 = 0;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero1;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero2;
	cout << "ingrese un numero:";
	cin >> numero3;
	if (numero1 > numero2) {
		if (numero1 > numero3) {
		
			if (numero2 > numero3) {
				cout << numero3;
				cout << numero2;
				cout << numero1;
			}
			else {
				cout << numero2;
				cout << numero3;
				cout << numero1;
			}
		}
		else {
			cout << numero3;
			cout << numero1;
			cout << numero2;
		}
	}
	else {
		if (numero2 > numero3) {
			if (numero1> numero3) {
				cout << numero3;
				cout << numero1;
				cout << numero2;
			}
			else {
				cout << numero1;
				cout << numero3;
				cout << numero2;
			}

		}

		else {
			cout << numero1;
			cout << numero2;
			cout << numero3;

		}
	}
	cout << "\n";

	return 0;
}
int ejercicio14()
{
	cout << "Ejercicio #14";
	cout << "\n";
	const float PI = 3.14159265;
	    float radio, altura, area, volumen;
	  cout<<("digite el radio del cilindro:");
	  cin >> radio;
	 cout<<("digite la altura del cilindro:");
	 cin >> altura ;
	    area = 2.0 * PI * radio * (radio + altura);
	    volumen = PI * radio * radio * altura;
		cout << "area=" << area;
		cout << "\n";
		cout << "volumen=" << volumen;
	cout << "\n";
	return 0;
}
int ejercicio15()
{
	cout << "Ejercicio #15";
	float velocidad = 0;
	float velocidad1 = 0;
	cout << "\n";
	cout << ("digite la velocidad en km/h:");
	cin >>velocidad;
	velocidad1 = velocidad / 3.6;
	cout << "velocidad m/s:" << velocidad1;
	cout << "\n";
	return 0;
}
int ejercicio16()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio17()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio18()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio19()
// falta 
{
	cout << "Ejercicio #19";

	double numero1 = 0;
	double numero2 = 0;
	double numero3 = 0;
	double numero4 = 0;
	double numero5 = 0;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero1;
	cout << "\n";
	cout << "ingrese un numero:";
	cin >> numero2;
	cout << "ingrese un numero:";
	cin >> numero3;
	cout << "ingrese un numero:";
	cin >> numero4;
	cout << "ingrese un numero:";
	cin >> numero5;
	
	cout << "\n";
	return 0;
}
int ejercicio20()
{
	cout << "Ejercicio #20";
	int i;
	int fact = 1;
	int numero;
	cout << "\n";
	cout << "ingresa un numero: ";
	cin >> numero;
	if (numero < 0) fact = 0;
	else if (numero == 0) fact = 1;
	else {
		for (i = 1; i <= numero; i++) {
			fact = fact * i;
		}
	}
	cout << "el factorial es : "<< fact;
	cout << "\n";
	return 0;
}
int ejercicio21()
{
	cout << "Ejercicio #21";
	cout << "\n";
	int numero = 0;
	cout << "ingresa un numero: ";
	cin >> numero;
	
		switch (numero)
		{
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
		case 10: cout << "X"; break;
		default: "digete un entero entre 1 y 10"; break;
		
		}
	
	return 0;
}
int ejercicio22()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio23()
{
	cout << "Ejercicio #23";
	float centimetros = 0;
	float pulgadas = 0;
	cout << "\n";
	cout << ("digite centimetros :");
	cin >> centimetros;
	pulgadas = centimetros / 2.54;
	cout  << pulgadas << " pulgadas";
	cout << "\n";
	return 0;
}
int ejercicio24()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio25()
{
	cout << "Ejercicio #25";
	cout << "\n";
	int numero = 0;
	cout << "ingresa un numero: ";
	cin >> numero;

	switch (numero)
	{
	case 1: cout << "enero"; break;
	case 2: cout << "febrero"; break;
	case 3: cout << "marzo"; break;
	case 4: cout << "abril"; break;
	case 5: cout << "mayo"; break;
	case 6: cout << "junio"; break;
	case 7: cout << "julio"; break;
	case 8: cout << "agosto"; break;
	case 9: cout << "septiembre"; break;
	case 10: cout << "octubre"; break;
	case 11: cout << "noviembre"; break;
	case 12: cout << "diciembre"; break;
	default: "digete un entero entre 1 y 12"; break;

	}
	return 0;
}

int ejercicio26(){
	cout << "Ejercicio #26";
	cout << "\n";
	int selector, opc, mes, dia;
		
			cout << "\t\t\tSIGNO ZODIACAL" << endl;
			cout << "(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril" << endl;
			cout << "(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto" << endl;
			cout << "(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre" << endl << endl;
			cout << "Ingrese la fecha de su cumplea" << char(164) << "o (dia y mes)" << endl;
			cin >> dia >> mes;
			switch (mes)
			{
			/*enero*/		case 1:if (dia < 21) cout << "Capricornio" << endl;
								  else	  cout << "Acuario" << endl; break;

			/*febrero*/		case 2:if (dia < 21) cout << "Acuario" << endl;
								  else	  cout << "Piscis" << endl; break;

			/*marzo*/		case 3:if (dia < 21) cout << "Piscis" << endl;
								  else	  cout << "Aries" << endl; break;

			/*abril*/		case 4:if (dia < 21) cout << "Aries" << endl;
								  else	  cout << "Tauro" << endl; break;

			/*mayo*/		case 5:if (dia < 22) cout << "Tauro" << endl;
								  else	  cout << "Geminis" << endl; break;

			/*junio*/		case 6:if (dia < 22) cout << "Geminis" << endl;
								  else	  cout << "Cancer" << endl; break;

			/*julio*/		case 7:if (dia < 23) cout << "Cancer" << endl;
								  else	  cout << "Leo" << endl; break;

			/*agosto*/		case 8:if (dia < 23) cout << "Leo" << endl;
								  else	  cout << "Virgo" << endl; break;

			/*septiembre*/	case 9:if (dia < 24) cout << "Virgo" << endl;
								  else	  cout << "Libra" << endl; break;

			/*octubre*/		case 10:if (dia < 25)cout << "Libra" << endl;
								   else	  cout << "Escorpio" << endl; break;

			/*noviembre*/	case 11:if (dia < 23)cout << "Escorpio" << endl;
								   else	  cout << "Sagitario" << endl; break;

			/*diciembre*/	case 12:if (dia < 22)cout << "Sagitario" << endl;
								   else	  cout << "Capricornio" << endl; break;

			default:cout << "el signo sodiacal es " << endl;
			}
			
	return 0;
}

int ejercicio27()
{
	cout << "Ejercicio #27";
	cout << "\n";
	int numero = 0;
	cout << "ingresa un numero: ";
	cin >> numero;
	cout << "total: " << numero;
	return 0;
}
int ejercicio28()
{
	cout << "Ejercicio #28";
	cout << "\n";
	int numero = 0;
	int totalsuma = 0;
	cout << "ingresa un numero: ";
	cin >> numero;

	for (int i = 1; i <= numero; i++)
	{
		totalsuma = i + totalsuma;
	}
	cout << "total: " << totalsuma;
	return 0;
}
int ejercicio29()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio30()
{
	cout << "Ejercicio #30";
	cout << "\n";
	float PI = 3.141592;
	float perimetro, radio;
	cout << (" Introduzca radio: ");
	cin >> radio;
	cout << " el perimetro es:" << 2 * PI * radio;
	cout << "\n";
	return 0;
}
int ejercicio31()
{
	cout << "Ejercicio #31";
	cout << "\n";
	double radio;
	double volumen;
	float pi = 3.141592;
	cout << "Introduce el radio de la esfera:";
	cin >> radio;
	volumen = pi * radio * radio * radio / 3;
	cout << "El volumen de la esfera es:" << volumen << endl;
	return 0;
}
int ejercicio32()
{
	cout << "Ejercicio #32";
	cout << "\n";
	double a, b, c;
	cout << "ingrese un cateto:" << endl;
	cin >> a;
	cout << "ingrese el otro cateto:" << endl;
	cin >> b;
	c = sqrt((a * a + b * b));
	cout << "la hipotenusa es:" << c<<endl;
	return 0;
}
int ejercicio33()
{
	float fahrenheit;
	cout << "Ejercicio #33";
	cout << "\n";
	cout << "ingrese grados fahrenheit:" << endl;
	cin >> fahrenheit;
	fahrenheit = (fahrenheit - 32) * 5 / 9;
	cout << fahrenheit <<" grados celsius" << endl;
	return 0;
}
int ejercicio34()
{
	cout << "Ejercicio #34";
	cout << "\n";
	float celsius;
	cout << "Ejercicio #33";
	cout << "\n";
	cout << "ingrese grados celsius:" << endl;
	cin >> celsius;
	celsius = (celsius * 9 / 5) + 32;
	cout << celsius << " grados fahrenheit" << endl;
	return 0;
}
int ejercicio35()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio36()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio37()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio38()
{
	cout << "Ejercicio #38";
	cout << "\n";
	int e1, e2, e3,promedio;
	cout << "digite la edad:" << endl;
	cin >> e1;
	cout << "digite la edad:" << endl;
	cin >> e2;
	cout << "digite la edad:" << endl;
	cin >> e3;
	promedio = (e1 + e2 + e3) / 3;
	cout << "el promedio de edad es:" << promedio<<endl;
	return 0;
}
int ejercicio39()
{
	cout << "Ejercicio #39";
	cout << "\n";
	double numero = 0;
	int i = 1;
	do
	{
		cout << "\n Ingrese un numero : ";
		cin >> numero;
		if (numero >= 0) 
			cout << numero;
			i++;
	} while (i <= 10);
	return 0;
}
int ejercicio40()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio41()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio42()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio43()
{
	cout << "Ejercicio no resouelto";
	cout << "\n";
	return 0;
}
int ejercicio44()
{
	cout << "Ejercicio #44";
	cout << "\n";
	float pesos = 0,dolares = 0;
	float trm=3431.46;

	cout << "digite valor en pesos:" << endl;
	cin >> pesos;
	dolares = trm * pesos;
	cout << "el valor en dolares es:"<<dolares << endl;


	return 0;
}
int ejercicio45()
{
	cout << "Ejercicio #45";
	cout << "\n";
	float pesos = 0, dolares = 0;
	float trm = 3431.46;

	cout << "digite valor en dolares:" << endl;
	cin >> dolares;
	pesos = trm * dolares;
	cout << "el valor en pesos es:" << pesos << endl;
	return 0;
}
int ejercicio46()
{
	cout << "Ejercicio #46";
	cout << "\n";
	float euros=0,dolares=0;
	float trm = 1.10;

	cout << "digite valor en euros:" << endl;
	cin >> euros;
	dolares = trm * euros;
	cout << "el valor en dolares es:" << dolares << endl;
	return 0;
}
int ejercicio47()
{
	cout << "Ejercicio #47";
	cout << "\n";
	float dolares = 0,euros=0;
	float trm = 0.91;

	cout << "digite valor en dolares:" << endl;
	cin >> dolares;
	euros = trm * dolares;
	cout << "el valor en euros es:" << euros << endl;
	return 0;
}
int ejercicio48()
{
	cout << "Ejercicio #48";
	cout << "\n";
	int numero = 0;

	cout << "digite 1 para futbol 2 para tejo: ";
	cout << "\n";
	cin >> numero;

	switch (numero)
	{
	case 1: 
		cout << "para jugar futbol necesita los siguientes elementos";
		cout << "\n";
		cout << "uniforme";
		cout << "\n";
		cout << "balon";
		cout << "\n";
		cout << "guayos";
		cout << "\n";
		cout << "cancha";
		cout << "\n";
		cout << "silbato";
		cout << "\n";
		cout << "targetas";
		cout << "\n";
		cout << "var";
		break;
	case 2:
		cout << "para jugar tejo necesita los siguientes elementos";
		cout << "\n";
		cout << "tejo";
		cout << "\n";
		cout << "mechas";
		cout << "\n";
		cout << "cancha";
		cout << "\n";
		cout << "bar";

		break;
	
	default: "digete una opcion valida"; break;

	}
	return 0;
}
int ejercicio49()
{
	cout << "Ejercicio #49";
	cout << "\n";
	float libras = 0, kilos = 0;
	float lb = 0.453592;

	cout << "indique cantidad de libras:" << endl;
	cin >> libras;
	kilos = lb *libras;
	cout << "el peso en kilos es:" << kilos << endl;
	return 0;
}
int ejercicio50()
{
	cout << "Ejercicio no resouelto";
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
		//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
