#include <string>
#include <iostream>
#include <fstream>

class Adress
{
public:
	Adress() :
		_city("null"), _street("null"), _house(-1), _apartment(-1)
	{
	}

	explicit Adress(const std::string& city, const std::string& street, int house, int apartment)
		: _city(city), _street(street), _house(house), _apartment(apartment)
	{
	}

	explicit Adress(const Adress& adress)
	{
		this->_city = adress._city;
		this->_street = adress._street;
		this->_house = adress._house;
		this->_apartment = adress._apartment;
	}

	~Adress()
	{
	}

	void readFromFile(std::ifstream& file);
	void writeToFile(std::ofstream& file) const;

private:
	std::string _city{ "null" };
	std::string _street{ "null" };
	int _house{ -1 };
	int _apartment{ -1 };
public:

};

void Adress::readFromFile(std::ifstream& file)
{
	file >> _city;
	file >> _street;
	file >> _house;
	file >> _apartment;
}

void Adress::writeToFile(std::ofstream& file) const
{
	file << _city << ", ";
	file << _street << ", ";
	file << _house << ", ";
	file << _apartment << std::endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	int numAdresses{};
	std::ifstream fileIn("in.txt");
	std::ofstream fileOut("out.txt");

	fileIn >> numAdresses;

	Adress* arrAdresses = new Adress[numAdresses]{};


	for (int idx{}; idx < numAdresses; idx++)
	{
		arrAdresses[idx].readFromFile(fileIn);
	}

	fileOut << numAdresses << std::endl;

	for (int idx{ numAdresses - 1 }; idx >= 0; idx--)
	{
		arrAdresses[idx].writeToFile(fileOut);
	}


	delete[] arrAdresses;

	return EXIT_SUCCESS;
}
