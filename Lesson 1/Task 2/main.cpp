#include <string>
#include <iostream>


struct BankAccaunt
{
	int id{};
	std::string userName{};
	double amount{};
};

void fillBankAccount(BankAccaunt& account)
{
	std::cout << "������� ����� �����: ";
	std::cin >> account.id;
	std::cout << "������� ��� ���������: ";
	std::cin >> account.userName;
	std::cout << "������� ������: ";
	std::cin >> account.amount;
	std::cout << std::endl;
}


void changeBankAccountAmount(BankAccaunt& account)
{
	std::cout << "������� ����� ������: ";
	std::cin >> account.amount;
	std::cout << std::endl;
}


void printBankAccount(const BankAccaunt& account)
{
	std::cout << "��� ����: " << account.userName << ", " <<
		account.id << ", " << account.amount << std::endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	BankAccaunt account{};
	fillBankAccount(account);
	changeBankAccountAmount(account);
	printBankAccount(account);

	return EXIT_SUCCESS;
}
