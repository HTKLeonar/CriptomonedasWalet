#include "Criptomonedas.h"

//Constructor con paremetros
Criptomonedas::Criptomonedas(string _Nombre, string _Clave, float _Precio)
{
	this->NameCrip = _Nombre;
	this->ClaveCrip = _Clave;
	this->Precio = _Precio;

}

//Destructor por defecto
Criptomonedas::~Criptomonedas()
{
}

void Criptomonedas::SetCrear(string NameCrip, string ClaveCrip, float Precio){
	this->NameCrip = NameCrip;
	this->ClaveCrip = ClaveCrip;
	this->Precio = Precio;
}

void Criptomonedas::SetCantidad(float _Cantidad) {
	this->Cantidad = _Cantidad;
}
float Criptomonedas::GetCantidad() {
	return this->Cantidad;
}


void Criptomonedas::Imprimir() {
	cout << "======================= CATALOGO DE CRIPTOMONEDAS =======================" << endl;
	cout << "Criptomoneda:" << this->NameCrip << endl;
	cout << "Clave de la criptomoneda:" << this->ClaveCrip << endl;
	cout << "Precio de la criptomoneda (PESOS MEXICANOS): " << "$ " << this->Precio << endl;
}

string Criptomonedas::GetName() {
	return this->NameCrip;
}

string Criptomonedas::GetClave() {
	return this->ClaveCrip;
}
float Criptomonedas::GetPrecio() {
	return this->Precio;
}

