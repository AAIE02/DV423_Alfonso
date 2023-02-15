// GuessMyNumber.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ibarra Estrada Alfonso Arturo 

#include <iostream>


using namespace std;

int numeroRandom, respuestaUsuario, lifes = 1;

void spawnNumeroRandom();

int main()
{
	spawnNumeroRandom();
	cout << numeroRandom << endl;
	cout << "Adivina el numero entre el 1 y el 100" << endl;
	cin >> respuestaUsuario;

	while (respuestaUsuario != numeroRandom)
	{
		if (respuestaUsuario > numeroRandom)
		{
			cout << "Tu numero es alto!!!, intentalo otra vez..." << endl;
				cin >> respuestaUsuario;
		}
		if (respuestaUsuario > numeroRandom && respuestaUsuario - numeroRandom <= 5)
		{
			cout << "Tu numero es alto pero demasiado cerca, intentalo otra vez..." << endl;
			cin >> respuestaUsuario;
		}
		if (respuestaUsuario < numeroRandom)
		{
			cout << "Tu numero es bajo!!!, intentalo otra vez..." << endl;
			cin >> respuestaUsuario;
		}
		if (respuestaUsuario < numeroRandom && respuestaUsuario - numeroRandom <= 5)
		{
			cout << "Tu numero es bajo pero demasiado cerca" << endl;
			cin >> respuestaUsuario;
		}

		lifes++;
	}
	cout << "Adivinaste el numero!!!" << endl;
	cout << "Intentos requeridos: " << lifes << endl;
}

void spawnNumeroRandom()
{
	srand(time(0));
	numeroRandom = 1 + (rand() % 100);
}
