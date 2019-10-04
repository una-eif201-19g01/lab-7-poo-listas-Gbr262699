#include <iostream>
#include "Carro.h"
#include "Moto.h"
#include "ListaVehiculos.h"



using namespace std;
int main() {
	Carro carro1(111, 150000, "Toyota");
	Moto moto2(666, 11000, "Yamaha");;

	ListaVehiculos* listaVehiculos = new ListaVehiculos();

	listaVehiculos->insertarInicio(carro1);
	listaVehiculos->insertarInicio(moto2);

	cout << "el costo del vehiculo por 30 dias" + to_string(listaVehiculos->obtenerVehiculo(1).calcularMonto(30));
	cout << "el costo de una moto por 6 dias" + to_string(listaVehiculos->obtenerVehiculo(2).calcularMonto(6));
}