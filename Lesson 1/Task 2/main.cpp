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
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> account.id;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> account.userName;
	std::cout << "¬ведите баланс: ";
	std::cin >> account.amount;
	std::cout << std::endl;
}


void changeBankAccountAmount(BankAccaunt& account)
{
	std::cout << "¬ведите новый баланс: ";
	std::cin >> account.amount;
	std::cout << std::endl;
}


void printBankAccount(const BankAccaunt& account)
{
	std::cout << "¬аш счЄт: " << account.userName << ", " <<
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
