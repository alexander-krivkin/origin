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

	std::string getCity() const { return _city; }

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


struct IndexCity
{
	int index;
	std::string city;
};


int main()
{
	setlocale(LC_ALL, "Russian");

	int numAdresses{};
	std::ifstream fileIn("in.txt");
	std::ofstream fileOut("out.txt");

	fileIn >> numAdresses;

	Adress* arrAdresses = new Adress[numAdresses]{};
	IndexCity* arrIndexCities = new IndexCity[numAdresses]{};


	for (int idx{}; idx < numAdresses; idx++)
	{
		arrAdresses[idx].readFromFile(fileIn);
		arrIndexCities[idx].index = idx;
		arrIndexCities[idx].city = arrAdresses[idx].getCity();
	}

	for (int i{ 0 }; i < numAdresses - 1; i++) {
		for (int j{ 0 }; j < numAdresses - i - 1; j++) {
			if (arrIndexCities[j].city > arrIndexCities[j + 1].city)
			{
				std::string tmpCity = arrIndexCities[j].city;
				arrIndexCities[j].city = arrIndexCities[j + 1].city;
				arrIndexCities[j + 1].city = tmpCity;

				int tmpIndex = arrIndexCities[j].index;
				arrIndexCities[j].index = arrIndexCities[j + 1].index;
				arrIndexCities[j + 1].index = tmpIndex;
			}
		}
	}

	fileOut << numAdresses << std::endl;

	for (int idx{}; idx < numAdresses; idx++)
	{
		arrAdresses[arrIndexCities[idx].index].writeToFile(fileOut);
	}


	delete[] arrIndexCities;
	delete[] arrAdresses;

	return EXIT_SUCCESS;
}
