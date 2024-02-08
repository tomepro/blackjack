#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

//Array de cartes
int corazones[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
int picas[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
int treboles[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
int rombos[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

//Variables
string altra_ronda;
int puntuacio_jugador;
int puntuacio_croupier;
int baralla_jugador;
int cartes_posesio;
int valor_AS = 0;
bool torn_jugador = false;
int cartes_posesio_croupier;
int baralla_croupier;
string start;
bool win = true;

int repartir_carta() {
    int rand_carta = rand() % 4;
    int rand_numero = rand() % 13;

	switch (rand_carta)
	{
	case 0:
		if (corazones[rand_numero] != 99)
		{
			if (corazones[rand_numero] == 1)
			{
				if (torn_jugador == true)
				{
					while (valor_AS != 1 && valor_AS != 11)
					{
						cout << "AS corazones\t";
						cout << "\nLa carta val 11 o 1, escull el valor que li vols assignar:\t";
						cin >> valor_AS;

						if (valor_AS == 1)
						{
							puntuacio_jugador = puntuacio_jugador + 1;
						}
						else if (valor_AS == 11)
						{
							puntuacio_jugador = puntuacio_jugador + 11;
						}
						else {
							cout << "Numero ivalid, tornal al intruduir...\n";
						}
						corazones[rand_numero] = 99;
					}
					valor_AS = 0;
				}
				else {
					cout << "AS corazones\t";
					corazones[rand_numero] = 99;
					if (puntuacio_croupier <= 10) {
						puntuacio_croupier = puntuacio_croupier + 11;
					}
					else if (puntuacio_croupier > 10) {
						puntuacio_croupier = puntuacio_croupier + 1;
					}
				}
			}
			else if (corazones[rand_numero] > 1 && corazones[rand_numero] <= 10)
			{
				cout << corazones[rand_numero] << " corazones\t";
				baralla_jugador = rand_numero;
				corazones[rand_numero] = 99;
			}
			else if (corazones[rand_numero] == 11)
			{
				cout << "J corazones\t";
				baralla_jugador = rand_numero;
				corazones[rand_numero] = 99;
			}
			else if (corazones[rand_numero] == 12)
			{
				cout << "Q corazones\t";
				baralla_jugador = rand_numero;
				corazones[rand_numero] = 99;
			}
			else if (corazones[rand_numero] == 13)
			{
				cout << "K corazones\t";
				baralla_jugador = rand_numero;
				corazones[rand_numero] = 99;
			}	
			return 1;
		}
		else {
			return 0;
		}
        
		break;
	case 1:

		if (picas[rand_numero] != 99)
		{
			if (picas[rand_numero] == 1)
			{
				if (torn_jugador == true)
				{
					while (valor_AS != 1 && valor_AS != 11)
					{
						cout << "AS picas\t";
						cout << "\nLa carta val 11 o 1, escull el valor que li vols assignar:\t";
						cin >> valor_AS;

						if (valor_AS == 1)
						{
							puntuacio_jugador = puntuacio_jugador + 1;
						}
						else if (valor_AS == 11)
						{
							puntuacio_jugador = puntuacio_jugador + 11;
						}
						else {
							cout << "Numero ivalid, tornal al intruduir...\n";
						}
						picas[rand_numero] = 99;
					}
					valor_AS = 0;
				}
				else {
					cout << "AS picas\t";
					picas[rand_numero] = 99;
					if (puntuacio_croupier <= 10) {
						puntuacio_croupier = puntuacio_croupier + 11;
					}
					else if (puntuacio_croupier > 10) {
						puntuacio_croupier = puntuacio_croupier + 1;
					}
				}
			}
			else if (picas[rand_numero] > 1 && picas[rand_numero] <= 10)
			{
				cout << picas[rand_numero] << " picas\t";
				baralla_jugador = rand_numero;
				picas[rand_numero] = 99;
			}
			else if (picas[rand_numero] == 11)
			{
				cout <<"J picas\t";
				baralla_jugador = rand_numero;
				picas[rand_numero] = 99;
			}
			else if (picas[rand_numero] == 12)
			{
				cout << "Q picas\t";
				baralla_jugador = rand_numero;
				picas[rand_numero] = 99;
			}
			else if (picas[rand_numero] == 13)
			{
				cout << "K picas\t";
				baralla_jugador = rand_numero;
				picas[rand_numero] = 99;
			}	
			return 1;
		}
		else {
			return 0;
		}
		
		break;
	case 2:
		if (treboles[rand_numero] != 99)
		{
			if (treboles[rand_numero] == 1)
			{
				if (torn_jugador == true)
				{
					while (valor_AS != 1 && valor_AS != 11)
					{
						cout << "AS treboles\t";
						cout << "\nLa carta val 11 o 1, escull el valor que li vols assignar:\t";
						cin >> valor_AS;

						if (valor_AS == 1)
						{
							puntuacio_jugador = puntuacio_jugador + 1;
						}
						else if (valor_AS == 11)
						{
							puntuacio_jugador = puntuacio_jugador + 11;
						}
						else {
							cout << "Numero ivalid, tornal al intruduir...\n";
						}
						treboles[rand_numero] = 99;
					}
					valor_AS = 0;
				}
				else {
					cout << "AS treboles\t";
					treboles[rand_numero] = 99;
					if (puntuacio_croupier <= 10) {
						puntuacio_croupier = puntuacio_croupier + 11;
					}
					else if (puntuacio_croupier > 10) {
						puntuacio_croupier = puntuacio_croupier + 1;
					}
				}
			}
			else if (treboles[rand_numero] > 1 && treboles[rand_numero] <= 10)
			{
				cout << treboles[rand_numero] << " treboles\t";
				baralla_jugador = rand_numero;
				treboles[rand_numero] = 99;
			}
			else if (treboles[rand_numero] == 11)
			{
				cout << "J treboles\t";
				baralla_jugador = rand_numero;
				treboles[rand_numero] = 99;
			}
			else if (treboles[rand_numero] == 12)
			{
				cout << "Q treboles\t";
				baralla_jugador = rand_numero;
				treboles[rand_numero] = 99;
			}
			else if (treboles[rand_numero] == 13)
			{
				cout << "K treboles\t";
				baralla_jugador = rand_numero;
				treboles[rand_numero] = 99;
			}
			return 1;
		}
		else {
			return 0;
		}

		break;
	case 3:
		if (rombos[rand_numero] != 99)
		{
			if (rombos[rand_numero] == 1)
			{
				if (torn_jugador == true)
				{
					while (valor_AS != 1 && valor_AS != 11)
					{
						cout << "AS rombos\t";
						cout << "\nLa carta val 11 o 1, escull el valor que li vols assignar:\t";
						cin >> valor_AS;

						if (valor_AS == 1)
						{
							puntuacio_jugador = puntuacio_jugador + 1;
						}
						else if (valor_AS == 11)
						{
							puntuacio_jugador = puntuacio_jugador + 11;
						}
						else {
							cout << "Numero ivalid, tornal al intruduir...\n";
						}
						rombos[rand_numero] = 99;
					}
					valor_AS = 0;
				}
				else {
					cout << "AS rombos\t";
					rombos[rand_numero] = 99;
					if (puntuacio_croupier <= 10) {
						puntuacio_croupier = puntuacio_croupier + 11;
					}
					else if (puntuacio_croupier > 10) {
						puntuacio_croupier = puntuacio_croupier + 1;
					}
				}
			}
			else if (rombos[rand_numero] > 1 && rombos[rand_numero] <= 10)
			{
				cout << rombos[rand_numero] << " rombos\t";
				baralla_jugador = rand_numero;
				rombos[rand_numero] = 99;
			}
			else if (rombos[rand_numero] == 11)
			{
				cout << "J rombos\t";
				baralla_jugador = rand_numero;
				rombos[rand_numero] = 99;
			}
			else if (rombos[rand_numero] == 12)
			{
				cout << "Q rombos\t";
				baralla_jugador = rand_numero;
				rombos[rand_numero] = 99;
			}
			else if (rombos[rand_numero] == 13)
			{
				cout << "K rombos\t";
				baralla_jugador = rand_numero;
				rombos[rand_numero] = 99;
			}
			return 1;
		}
		else {
			return 0;
		}
		
		break;
	default:
		break;
	}

}

/*void valor_carta_AS(int rand_numero) {
	if (torn_jugador = true)
	{
		while (valor_AS != 1 && valor_AS != 11)
		{
			cout << "AS corazones\t";
			cout << "\nLa carta val 11 o 1, escull el valor que li vols assignar:\t";
			cin >> valor_AS;

			if (valor_AS == 1)
			{
				puntuacio_jugador = puntuacio_jugador + 1;
			}
			else if (valor_AS == 11)
			{
				puntuacio_jugador = puntuacio_jugador + 11;
			}
			else {
				cout << "Numero ivalid, tornal al intruduir...\n";
			}
			corazones[rand_numero] = 99;
		}
	}
	else {
		cout << "torn del croupier";
	}
	
}*/

void valors() {
    if (baralla_jugador >= 1 && baralla_jugador <= 9){
        puntuacio_jugador = puntuacio_jugador + baralla_jugador + 1;
		baralla_jugador = 0;
    }
    else if (baralla_jugador >= 10 && baralla_jugador <= 13) {
        puntuacio_jugador = puntuacio_jugador  + 10;
		baralla_jugador = 0;
    }
}

void valors_croupier() {
	if (baralla_jugador >= 1 && baralla_jugador <= 9) {
		puntuacio_croupier = puntuacio_croupier + baralla_jugador + 1;
		baralla_jugador = 0;
	}
	else if (baralla_jugador >= 10 && baralla_jugador <= 13) {
		puntuacio_croupier = puntuacio_croupier + 10;
		baralla_jugador = 0;
	}
}

void demanar_carta() {
	torn_jugador = true;
	cartes_posesio = cartes_posesio + 1;
	cout << "\nLa teva " << cartes_posesio << " carta es:\t";
	//repartir_carta();
	if (repartir_carta() == 0)
	{
		repartir_carta();
	}
	valors();
	torn_jugador = false;
}

void carta_croupier() {
	cartes_posesio_croupier = cartes_posesio_croupier + 1;
	cout << "\nLa carta " << cartes_posesio_croupier << " del croupier es:\t";
	baralla_croupier = repartir_carta();
	valors_croupier();
}

void menu_joc() {
	//cout << " #####    ##        ####     ####    ## ##       ##     ####     ####    ## ##\n";
	//cout << " ##  ##   ##       ##  ##   ##  ##   ####        ##    ##  ##   ##  ##   ####\n";
	//cout << " #####    ##       ######   ##       ###         ##    ######   ##       ###\n";
	//cout << " ##  ##   ##       ##  ##   ##  ##   ####     ## ##    ##  ##   ##  ##   ####\n";
	//cout << " #####    #####    ##  ##    ####    ## ##     ###     ##  ##    ####    ## ##\n";

	system("cls");

	cout << "\n\t ________  ___       ________  ________  ___  __          ___  ________  ________  ___  __       \n";
	cout << "\t|\\   __  \\|\\  \\     |\\   __  \\|\\   ____\\|\\  \\|\\  \\       |\\  \\|\\   __  \\|\\   ____\\|\\  \\|\\  \\     \n";
	cout << "\t\\ \\  \\|\\ /\\ \\  \\    \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\/  /|_     \\ \\  \\ \\  \\|\\  \\ \\  \\___|\\ \\  \\/  /|_   \n";
	cout << "\t \\ \\   __  \\ \\  \\    \\ \\   __  \\ \\  \\    \\ \\   ___  \\  __ \\ \\  \\ \\   __  \\ \\  \\    \\ \\   ___  \\  \n";
	cout << "\t  \\ \\  \\|\\  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\____\\ \\  \\\\ \\  \\|\\  \\\\_\\  \\ \\  \\ \\  \\ \\  \\____\\ \\  \\\\ \\  \\ \n";
	cout << "\t   \\ \\_______\\ \\_______\\ \\__\\ \\__\\ \\_______\\ \\__\\\\ \\__\\ \\________\\ \\__\\ \\__\\ \\_______\\ \\__\\\\ \\__\\\n";
	cout << "\t    \\|_______|\\|_______|\\|__|\\|__|\\|_______|\\|__| \\|__|\\|________|\\|__|\\|__|\\|_______|\\|__| \\|__|\n\n\n";

	cout << "\t\t\t\t\t  _________________________\n";
	cout << "\t\t\t\t\t |      MENU DEL JUEGO     | \n";
	cout << "\t\t\t\t\t  -------------------------\n";
	cout << "\t\t\t\t\t |  1.- Empezar a jugar    | \n";
	cout << "\t\t\t\t\t |  2.- Salir              | \n";
	cout << "\t\t\t\t\t |_________________________|\n\n\n";

	cout << "\t\t\t\t\t Opcion:\t";
	cin >> start;
}

void print_final() {
	if (win == true)
	{
		cout << "\t\t ## \n";
		cout << "\t\t ## \n";
		cout << "\t\t#####   ##  ##             ### ##  ##  ##    ####    #####    ##  ##    ####     ##### \n";
		cout << "\t\t ##     ##  ##            ##  ##   ##  ##       ##   ##  ##   ##  ##   ##  ##   ## \n";
		cout << "\t\t ##     ##  ##            ##  ##   ##  ##    #####   ##  ##   ##  ##   ######    ##### \n";
		cout << "\t\t ## ##  ##  ##             #####   ##  ##   ##  ##   ##  ##    #####   ##            ## \n";
		cout << "\t\t  ###    ######               ##    ######   #####   ##  ##       ##    #####   ###### \n";
		cout << "\t\t                          #####                               ##### \n";

	}
	else if(win == false)
	{
		cout << "\t\t\t ##                                                     ### \n";
		cout << "\t\t\t ##                                                      ## \n";
		cout << "\t\t\t#####   ##  ##            ######    ####    ######       ##    ##### \n";
		cout << "\t\t\t ##     ##  ##             ##  ##  ##  ##    ##  ##   #####   ## \n";
		cout << "\t\t\t ##     ##  ##             ##  ##  ######    ##      ##  ##    ##### \n";
		cout << "\t\t\t ## ##  ##  ##             #####   ##        ##      ##  ##        ## \n";
		cout << "\t\t\t  ###    ######            ##       #####   ####      ######  ###### \n";
		cout << "\t\t\t                          #### \n";
	}
}

int main()
{
	//per la variable rand
	srand(time(NULL));
	//variables
	bool partida = true;
	while (start != "2")
	{
		//Menu del joc
		menu_joc();
		system("cls");
		if (start == "1")
		{
			//inici joc
			while (partida == true)
			{
				if (cartes_posesio < 2)
				{
					demanar_carta();
					Sleep(1000);
					demanar_carta();
					Sleep(1000);
				}
				else
				{
					demanar_carta();
					Sleep(1000);
				}
				cout << "\n__________________________________";
				Sleep(1000);
				cout << "\nTens una puntuacio de: " << puntuacio_jugador << "\n\n";
				Sleep(1000);
				if (cartes_posesio_croupier < 2)
				{
					carta_croupier();
					Sleep(1000);
				}
				else
				{
					if (puntuacio_croupier < 19)
					{
						carta_croupier();
						Sleep(1000);
					}
				}
				cout << "\n__________________________________";
				Sleep(1000);
				cout << "\nEl croupier te una puntuacio de: " << puntuacio_croupier << "\n\n";
				Sleep(1000);
				cout << "\n\n\nDemanar una altra carta ?\n";
				cin >> altra_ronda;
				if (altra_ronda == "0")
				{
					partida = false;
				}
			}
			system("cls");
			//Puntuacio del croupier
			cout << "\n\n\t\t\t\t\t ___________________________________";
			Sleep(1000);
			cout << "\n\t\t\t\t\t|     Tens un total de " << puntuacio_jugador << " punts     |\n";
			Sleep(1000);
			cout << "\t\t\t\t\t ___________________________________";
			Sleep(1000);
			cout << "\n\t\t\t\t\t| El croupier te un total de " << puntuacio_croupier << " punts |\n";
			Sleep(1000);
			cout << "\t\t\t\t\t ___________________________________\n\n\n";
			//Comprobacio si algu es pasa
			if (puntuacio_jugador > 21)
			{
				win = false;
				print_final();
			}
			else if (puntuacio_croupier > 21)
			{
				print_final();
			}
			else if (puntuacio_croupier <= 21 && puntuacio_jugador <= 21)
			{
				//Comparacio de cartes
				if (puntuacio_jugador > puntuacio_croupier)
				{
					print_final();
				}
				else if (puntuacio_jugador == puntuacio_croupier)
				{
					print_final();
				}
				else if (puntuacio_jugador < puntuacio_croupier)
				{
					win = false;
					print_final();
				}
				puntuacio_jugador = 0;
				puntuacio_croupier = 0;
				cartes_posesio = 0;
				cartes_posesio_croupier = 0;
				partida = true;
				Sleep(10000);
				start = "0";
			}
		}
		else if (start == "2")
		{
			exit;
		}
		else
		{
			cout << "Numero erroni";
		}
	}	
}