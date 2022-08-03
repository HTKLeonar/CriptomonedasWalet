//Kevin Hidalgo Tuz   IGTI
#include <iostream>
#include "Criptomonedas.h"
#include <string>
#include <vector>


using namespace std;

void menu();


Criptomonedas* P1;
static vector <Criptomonedas> Criptomoneda;
int main() {
	menu();
	
	system("Pause");
}

void menu() {
	int opc;
	float Cantidad = 0;
	
	do {
		system("cls");
		cout << "=============== MENU DE OPCIONES ============== \n";
		cout << "1) Crear criptomoneda. " << endl;
		cout << "2) Imprimir catalogo de criptomonedas y comprar." << endl;
		cout << "3) Imprimir wallet." << endl;
		cout << "4) Salir." << endl;
		cout << "Seleccione una opccion:" << endl;
		cin >> opc;
		
		if (opc == 1) {
			system("cls");
			string Nombre;
			string Clave;
			float Precio = 0;
			Criptomonedas* P1 = new Criptomonedas(Nombre, Clave, Precio);
			cout << "Ingrese el nombre de la criptomoneda a crear: " << endl;
			cin >> Nombre;
			cout << "Ingrese la clave de la criptomoneda a crear: " << endl;
			cin >> Clave;
			cout << "Ingrese el precio de esa criptomoneda en pesos mexicanos:" << endl;
			cin >> Precio;
			P1->SetCrear(Nombre, Clave, Precio);
			Criptomoneda.push_back(*P1);
			system("Pause");

		}
		else if (opc == 2) {
			system("cls");
			for (int i = 0; i < Criptomoneda.size(); i++)
			{
				Criptomoneda[i].Imprimir();
			
			cout << endl;
		
			string BusqClave;
			
			cout << "=============== MENU DE COMPRA DE CRIPTOMONEDAS ===============" << endl;
			cout << "Ingresa la clave de la criptomoneda elegida: " << endl;
			cin >> BusqClave;
			

				if (Criptomoneda[i].GetClave() == BusqClave) {
					Criptomoneda[i].Imprimir();
					system("cls");
					
					cout << "================== CANTIDAD A COMPRAR ===================" << endl;
					cout << "Cuantas monedas desea comprar, ingrese la cantidad: " << endl;
					cin >> Cantidad;
					Criptomoneda[i].SetCantidad(Cantidad);
					Cantidad *= Criptomoneda[i].GetPrecio();

					cout << "El precio a pagar es: $" << Cantidad << endl;
					
				}
				else {
					cout << "ERROR!!! Ingresa de nuevo " << endl;
					menu();
				}
			}
			system("Pause");
			
		}
		else if(opc == 3)
		{
			system("cls");
			cout << "                          BIENVENIDO AL WALLET                            " << endl;
			for (int i = 0; i < Criptomoneda.size(); i++)
			{ 
				cout << endl;
				Criptomoneda[i].Imprimir();
				cout << "Total: $" << Cantidad << endl;
				cout << "=========================================================================" << endl;
				cout << "----------------------- Criptomonedas Compradas -----------------------" << endl;
				cout << "Cantidad Comprada: " << Criptomoneda[i].GetCantidad()  << endl;
				cout << "\nDeseas comprar mas monedas? (Presiona 'S' si desea comprar mas)" << endl;
				string si;
				cin >> si;
				if (si == "S") {
					system("cls");
					float Extra = 0;
					cout << "Cuantas monedas extra quiere comprar? : " << endl;
					cin >> Extra;
					Extra = Extra * Cantidad;
					cout << "El precio extra ahora es: $" << Extra << endl;
					system("pause");
					system("cls");
					cout << "                            FACTURA                       " << endl;
					Criptomoneda[i].Imprimir();
					cout << "Total: $" << Extra << endl;
				}
				else {
					Criptomoneda[i].Imprimir();
					cout << "Total: $" << Cantidad << endl;
					cout << "=========================================================================" << endl;
					cout << "----------------------- Criptomonedas Compradas -----------------------" << endl;
					cout << "Cantidad Comprada: " << Criptomoneda[i].GetCantidad() << endl;
					system("pause");
					menu();
				}
			}
		
			system("Pause");
		}

	}while (opc != 4);
}



