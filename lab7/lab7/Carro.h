#include <string>
#include <ostream>
#include "Vehiculo.h"



class Carro : public Vehiculo
{


public:
	Carro();

	Carro(int, float, const std::string);

	virtual ~Carro();

	float calcularMonto(int);

	std::string toString();


};