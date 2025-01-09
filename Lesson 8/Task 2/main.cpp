#include <iostream>
#include <Windows.h>


class Fraction
{
public:
	Fraction() : numerator_{ 1 }, denominator_{1}
	{
	}

	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;

		shorten();
	}

	Fraction& operator = (const Fraction& other)
	{
		if (this == &other)
		{
			return *this;
		}

		numerator_ = other.numerator_;
		denominator_ = other.denominator_;
		return *this;
	}

	bool operator == (const Fraction& other) const
	{
		return (static_cast<double>((numerator_ / denominator_)) ==
			static_cast<double>((other.numerator_ / other.denominator_)));
	}

	bool operator != (const Fraction& other) const
	{
		return (!(*this == other));
	}

	bool operator > (const Fraction & other) const
	{
		return ((numerator_ * other.denominator_) >	(other.numerator_ * denominator_));
	}

	bool operator < (const Fraction& other) const
	{
		return (!(*this > other) && (*this != other));
	}

	bool operator >= (const Fraction& other) const
	{
		return ((*this > other) || (*this == other));
	}

	bool operator <= (const Fraction & other) const
	{
		return ((*this < other) || (*this == other));
	}


	Fraction operator - ()
	{
		return Fraction((-numerator_), denominator_);
	}

	Fraction operator + (const Fraction& other)
	{
		return Fraction((numerator_ * other.denominator_) + (other.numerator_ * denominator_),
			denominator_ * other.denominator_);
	}

	Fraction operator - (const Fraction& other)
	{
		return Fraction((numerator_ * other.denominator_) - (other.numerator_ * denominator_),
			denominator_ * other.denominator_);
	}

	Fraction operator * (const Fraction& other)
	{
		return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
	}

	Fraction operator / (const Fraction& other)
	{
		return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
	}

	Fraction& operator ++ ()
	{
		numerator_ += denominator_;
		return *this;
	}

	Fraction operator ++ (int)
	{
		Fraction tmp = *this;
		++(*this);
		return tmp;
	}

	Fraction& operator -- ()
	{
		numerator_ -= denominator_;
		return *this;
	}

	Fraction operator -- (int)
	{
		Fraction tmp = *this;
		--(*this);
		return tmp;
	}

	friend std::istream& operator >> (std::istream&, Fraction& obj);
	friend std::ostream& operator << (std::ostream&, const Fraction& obj);

private:
	int numerator_;
	int denominator_;

	void shorten();
};


int GCD(int a, int b)
{
	if (a == 0) return b;
	return GCD(b % a, a);
}

void Fraction::shorten()
{
	int gcd = GCD(abs(numerator_), abs(denominator_));
	numerator_ /= gcd;
	denominator_ /= gcd;
}


std::istream& operator >> (std::istream&, Fraction & obj)
{
	std::cin >> obj.numerator_;
	std::cin >> obj.denominator_;
	return std::cin;
}

std::ostream& operator << (std::ostream&, const Fraction& obj)
{
	std::cout << obj.numerator_ << "/" << obj.denominator_;
	return std::cout;
}


int main()
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Fraction f1{};
	Fraction f2{};

	std::cout << "¬ведите числитель и знаменатель дроби 1: ";
	std::cin >> f1;
	std::cout << "¬ведите числитель и знаменатель дроби 2: ";
	std::cin >> f2;

	std::cout << std::endl;
	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl << std::endl;

	std::cout << "++"  << f1 << " * " << f2 << " = " << ++f1 * f2 << std::endl;
	std::cout << "ƒробь 1 = " << f1 << std::endl;
	std::cout << f1 << "-- * " << f2 << " = " << (f1--) * f2 << std::endl;
	std::cout << "ƒробь 1 = " << f1 << std::endl;
	std::cout << std::endl;

	return EXIT_SUCCESS;
}