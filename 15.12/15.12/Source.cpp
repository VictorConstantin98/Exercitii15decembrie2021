#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;
void main()
{
	///Afisam primele 100 de numere naturale
	/*int a = 0;
	while (a < 100)
	{
		cout << "a=" << a << endl;
		a = a + 1;
	}*/
	
	///Afisam numerele pare naturale mai mici decat 100
	/*int a = 0;
	while (a < 100)
	{
		cout << "a=" << a << endl;
		a = a + 2;
	}*/

	///Afisam primele 20 de numere pare
	/*int a = 0;
	int contor;
	contor = 0;
	while (contor < 20)
	{
		cout << "a=" << a << endl;
		a = a + 2;
		contor = contor + 1;
	}*/

	///Afiseaza primele 10 numere din sirul lui Fibonacci
	/*int xn2 = 1;
	int xn1 = 2;
	int xn;
	cout << xn2 << endl;
	cout << xn1 << endl;
	int contor = 2;
	while (contor < 10)
	{
		xn = xn1 + xn2;
		xn2 = xn1;
		xn1 = xn;
		cout << xn << endl;
		contor = contor + 1;
	} */

	///Afisarea primei cifre dintr-un numar dat
	/*int a;
	cin >> a;
	while (a >= 10)
	{
		a = a / 10; /// taiem ultima cifra
	}
	cout << a << endl;*/
	//int b;
	//b = a % 10; // nu cred ca e nevoie
	//cout << b;


	///Homework
	//Ex 1
	/*int a = 0;
	int suma = 0;
	while (a < 10)
	{
		cout << "a=" << a << endl;
		a = a + 1;
		if (a < 10)
		{
			suma = suma + a;
		}
	}
	cout << "suma=" << suma << endl;*/
	

	//Ex 2
	/*int a = 100;
	while (a >= 1)
	{
		cout << "a=" << a << endl;
		a = a - 1;
	}*/

	//Ex 3
	//int a;
	//a = 1;
	//int suma = 0;
	//int sumaNrPare = 0;  // lower camell case
	///*int sumar_nr_pare;*/
	//int sumaNrDivizibile = 0;
	//while (a > 0)
	//{
	//	cout << "a=";
	//	cin >> a;
	//	cout << a << endl;
	//	if (a > 0)
	//	{
	//		suma = suma + a;
	//		cout << "suma=" << suma << endl;
	//	}
	//	if (a % 2 == 0 && a > 0)
	//	{
	//		sumaNrPare = sumaNrPare + a;
	//		cout << "sumaNrPare=" << sumaNrPare << endl;
	//	}
	//	if (a % 5 == 0 && a > 0)
	//	{
	//		sumaNrDivizibile = sumaNrDivizibile + a;
	//		cout << "sumaNrDivizibile=" << sumaNrDivizibile << endl;
	//	}
	//}
	


	//Ex 4
	//Se sa creeze un program care sa imi afiseze primele 10 elemente din tabelul de multiplicare al unui numar dat
	//int a;
	//int multiplu = 0;
	//int contor = 0;
	//cin >> a;
	//while (contor < 10)				//te folosesti de valoarea anterioara a multiplului
	//{
	//	multiplu = multiplu + a;
	//	cout << multiplu << " ";
	//	contor = contor + 1;
	//}
	//cout << endl;
	//contor = 0;
	//while (contor < 10)//te folosesti de contor
	//{
	//	multiplu = a * (contor + 1);
	//	cout << multiplu << " ";
	//	contor = contor + 1;
	//}


	/*int nrMultipli;
	while (true)
	{
		cout << endl;
		cout << "a=";
		cin >> a;
		cout << "Numar multipli ";
		cin >> nrMultipli;
		contor = 0;
		multiplu = 0;
		while (contor < nrMultipli)				
		{
			multiplu = multiplu + a;
			cout << multiplu << " ";
			contor = contor + 1;
		}
	}*/
	
	//Ex 5
	/*int a;
	int b;
	int putere = 0;
	int rezultat = 1;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	while (putere < b)
	{
		putere = putere + 1;
		rezultat = rezultat * a;
	}
	cout << "rezultat=" << rezultat << endl;
	cout << "putere " << putere << endl;
	int rezultat2 = pow(a, b); // pow = functie pentru ridicare la putere
	cout << "rezultat2=" << rezultat2 << endl;*/ 

	//Ex 6
	/*int a;
	int rezultat;
	cout << "a=";
	cin >> a;  
	rezultat = a;
	while (a > 1)
	{
		a = a - 1;       
		rezultat = rezultat * a;
	}
	cout << "rezultat=" << rezultat << endl;
	int rezultat2;
	a = 5;
	rezultat2 = tgamma(a + 1);
	cout << "rezultat2=" << rezultat2 << endl;*/


	//Ex 7
	//int numere = 1;
	//int nrPozitive = 0;
	//while (numere != 0)
	//{
	//	cout << "numere: ";
	//	cin >> numere;
	//	if (numere > 0)
	//	{
	//		nrPozitive = nrPozitive + 1;
	//		//nrPozitive++; echivalent cu nrPozitive=nrPozitive+1
	//	}
	//	cout << "Numarul de aparitii al numerelor pozitive: " << nrPozitive << endl;
	//}

	/*int a = 0;*/

	//a++; //incrementare cu 1;   (postincrementare)
	//a--;// decrementare cu 1; (postdecrementare)
	//++a; // incrementare cu 1; (preincrementare)
	//--a; // decrementare cu 1; (predecrementare)

	/*int b = 0;*/
	//a = 5;
	//b = b + (++a); // pas 1:  se incrementareaza cu 1 pas2 : b + noul a;  pas 3: atribuirea lui b cu noul b;
	//cout << b << endl;
	//b = 0;
	//a = 5;
	//b = b + a++; //pas 1: b +a ;  pas 2: atribuirea lui b; pas 3: se incremeneteaza  a cu 1;
	//cout << b << endl;
	//cout << a << endl;
	//cout << endl;

	/*a = 5;
	b = 0;
	b = a +( ++ a);
	cout << b << endl;*/

	/*int a;
	int b;
	a = 5;
	b = 0;
	b = a + a++;
	cout << b << endl;
	cout << a << endl;
	cout << endl;*/

	/*a = 5;
	b = 0;
	b = ++a + a++;
	cout << b << endl;
	cout << a << endl;
	cout << endl;*/

	/*int c;
	a = 5;
	b = 1;
	c = 10;
	b = ++a + (++c) + c + a++;
	cout << a << " " << b << " " << c << endl;
	cout << endl;

	a = 5;
	b = 1;
	c = 10;
	b = ++a + (++c) + c + a++ + b++;
	cout << a << " " << b << " " << c << endl;
	cout << endl;*/

	// += -= *= /=
	// a+=b   echivalentul  a=a+b  adun  a+b  si rezultatul il atribui lui a;

	/*a = 5;
	b = 1;
	b += a;
	b += 3;
	b /= 3;
	cout << endl;

	a = 5;
	b = 2;
	c = 10;
	b *= ++a + (++c) + c + a++ + b++;
	cout << a << " " << b << " " << c << endl;*/


	//Ex 8
	/*int numar = 1;
	int min;
	min = numar;
	int max;
	max = numar;
	while (numar != 0)
	{
		cout << "Numar: ";
		cin >> numar;
		if (numar < min && numar != 0)
		{
			min = numar;
		}
		else
		{
			if (numar > max && numar != 0)
			{
				max = numar;
			}
		}
	}
	cout << "Minimul este: " << min << endl;
	cout << "Maximul este: " << max << endl;*/

	//Ex 9
	/*int a;
	cin >> a;
	int primaCifra;
	int ultimaCifra = a % 10;
	while (a >= 10)
	{
		a = a / 10;
		primaCifra = a;
	}
	cout << "Prima cifra a numarului este " << primaCifra << " iar ultima cifra este " << ultimaCifra << endl;*/
	
	//Ex 10
	/*int a;
	cin >> a;
	int sumaCifrelor = 0;
	while (a != 0)
	{
		sumaCifrelor = sumaCifrelor + a % 10;
		a = a / 10;
	}
	cout << "Suma cifrelor este egala cu " << sumaCifrelor << endl;*/

	//Ex 11
	/*int a;
	cin >> a;
	int primaCifra;
	int aDouaCifra;
	int penultimaCifra;
	int ultimaCifra = a % 10;
	int sumaCifrelor = 0;
	int sumaCifrelor2 = 0;
	while (a >= 10)
	{
		penultimaCifra = a;
		a = a % 100 / 10;
		primaCifra = a;
		a = a / 10;
		sumaCifrelor = primaCifra + ultimaCifra;
		a = a / 100;
		aDouaCifra = a;
		sumaCifrelor2 = penultimaCifra + aDouaCifra;
		
	}
	cout << "Penultima si ultima cifra a lui a: " << penultimaCifra << " si " << ultimaCifra << endl;
	cout << "Suma primei cifre si ultimei cifre: " << sumaCifrelor << endl;
	cout << "Suma penultimei cifre si celei de-a doua cifre: " << sumaCifrelor2 << endl;*/

	//Ex 12
	/*string a;
	while (a != "END")
	{
		cin >> a;
		if (a != "END")
		{
			cout << a;
		}
		cout << endl;
	}
	cout << "I am done" << endl;*/






















}