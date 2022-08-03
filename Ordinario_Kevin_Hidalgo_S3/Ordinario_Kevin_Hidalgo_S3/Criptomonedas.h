#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Criptomonedas
{
public:
	Criptomonedas(string,string,float);
	~Criptomonedas();

private:
	string NameCrip;
	string ClaveCrip;
	float Precio;
	
public:
	void Imprimir();
	float Cantidad;
public:
	void SetCrear(string, string, float);
	string GetName();
	string GetClave();
	float GetPrecio();

public:
	void SetCantidad(float);
	float GetCantidad();
	

	

};

