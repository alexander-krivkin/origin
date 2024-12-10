#include <string>
#include <iostream>


class Counter
{
private:
	static int cnt;

public:
	explicit Counter()
	{
	}

	explicit Counter(const Counter& _counter)
	{
	}

	~Counter()
	{
	}

	void increaseCnt()
	{
		cnt++;
	}

	void decreaseCnt()
	{
		cnt--;
	}

	void setCnt(int _cnt)
	{
		cnt = _cnt;
	}

	int getCnt() const
	{
		return cnt;
	}	
};


int Counter::cnt = 0;

int main()
{
	setlocale(LC_ALL, "Russian");

	Counter counter{};
	std::string str_cmd{};
	unsigned char ch_cmd{};

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::getline(std::cin, str_cmd);
	if (str_cmd.compare("да"))
	{
		int i1{};
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> i1;
		counter.setCnt(i1);
	}

	while ((ch_cmd != 120) && (ch_cmd != 229))
	{
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
		std::cin >> ch_cmd;

		switch (ch_cmd)
		{
			case '+': counter.increaseCnt(); break;
			case '-': counter.decreaseCnt(); break;
			case '=': std::cout << "cnt= " << counter.getCnt() << std::endl; break;
			default: break;
		}
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}