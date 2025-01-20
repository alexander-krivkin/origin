#pragma once
#include <utility>
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

template <typename T>
class ExtArray
{
private:
	std::vector<T> extended_array;
	size_t _size;
public:
	ExtArray(std::initializer_list<T> l) : extended_array(l)
	{
		_size = l.size();
	}

	ExtArray(int size) : _size(size)
	{
		extended_array.resize(_size);
	}

	T& operator[](size_t index)
	{
		return extended_array[index];
	}

	size_t size()
	{
		return _size;
	}

	double mean()
	{
		if (!_size) return 0;

		double sum = 0;
		for (size_t i = 0; i < _size; i++)
		{
			sum += extended_array[i];
		}
		return sum / _size;
	}

	double mean(size_t startIdx, size_t endIdx)
	{
		if (endIdx <= startIdx) throw std::invalid_argument("Invalid argument");

		double sum = 0;
		for (size_t i = startIdx; i <= endIdx; i++)
		{
			sum += extended_array[i];
		}
		return sum / (1 + endIdx - startIdx);
	}

	double median()
	{
		if (!_size) return 0;

		std::vector<T> temp_array;
		std::copy(extended_array.begin(), extended_array.end(), back_inserter(temp_array));
		std::sort(temp_array.begin(), temp_array.end());
		if (_size % 2 == 1)
		{
			return temp_array[_size / 2];
		}
		else
		{
			return static_cast<double>(temp_array[(_size / 2) - 1] + temp_array[_size / 2]) / 2;
		}
	}

	int checkSum()
	{
		std::string typeName = typeid(T).name();

		if ((typeName != "int") && (typeName != "bool")) throw std::bad_typeid();

		int sum = 0;

		for (int i = 0; i < _size; i++)
		{
			if (typeName == "int")
			{
				if ((extended_array[i] != 0) && (extended_array[i] != 1)) throw std::logic_error("Not 0 or 1");
				if (extended_array[i] == 1) sum++;
			}
			if (typeName == "bool")
			{
				if (extended_array[i] == true) sum++;
			}
		}

		return sum;
	}

	std::pair<T, int> mode()
	{
		T max = extended_array[0], cmax = 0, rmax = 0;
		for (int i = 0; i < _size; i++) 
		{
			if (cmax > rmax) 
			{
				rmax = cmax;
				max = extended_array[i - 1];
			}
			cmax = 0;
			for (int j = i; j < _size; j++)
			{
				if (extended_array[j] == extended_array[i])
				{
					cmax++;
				}
			}
		}
		return std::pair<T, int>(max, rmax);
	}
};
