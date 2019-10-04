#include <ostream>
#include "Nodo.h"

class ListaVehiculos {
	Nodo* primero;
	Nodo* actual;

public:
	ListaVehiculos();

	virtual ~ListaVehiculos();

	void insertarInicio(const Vehiculo&);
	void insertarFinal(const Vehiculo&);
	bool eliminarInicio();
	bool eliminarFinal();
	bool encontrado(int);
	Vehiculo obtenerVehiculo(int);
	int totalNodos();
	bool listaVacia();

	Nodo* getPrimero() const;

	void setPrimero(Nodo* primero);

	Nodo* getActual() const;

	void setActual(Nodo* actual);

	std::string toString();
};