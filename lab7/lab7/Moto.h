#include <string>
#include <ostream>
#include "Vehiculo.h"




class Moto : public Vehiculo
{


public:
	Moto();

	Moto(int, float, const std::string);

	virtual ~Moto();

	float calcularMonto(int);

	std::string toString();
};
