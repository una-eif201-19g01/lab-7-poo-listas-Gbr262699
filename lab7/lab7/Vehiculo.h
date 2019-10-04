#include <string>
#include <ostream>



class Vehiculo {
	int id;
	float costo;
	std::string marca;


public:
	Vehiculo();

	Vehiculo(int, float, const std::string);

	virtual ~Vehiculo();

	int getId() const;

	void setId(int);

	const std::string getMarca() const;

	void setMarca(const std::string);

	float getCosto();

	void setCosto(float);

	virtual float calcularMonto(int);

	virtual std::string toString();
};
