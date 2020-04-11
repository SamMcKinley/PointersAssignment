#include <iostream>
#include <string>

using namespace std;

void transferFunds(int account1, int account2);
void hackedTransfer(int* account1, int* account2);

void setPassword(string password);
void hackedPassword(string* password);

int main()
{
	int balance1 = 10000;
	int balance2 = 500;

	string password = "standardPassword";

	cout << "Account Balance Hack:\n";

	cout << "\tBalance 1: $" << balance1 << endl;
	cout << "\tBalance 2: $" << balance2 << "\n\n";
	transferFunds(balance1, balance2);
	
	cout << "\tBalance 1: $" << balance1 << endl;
	cout << "\tBalance 2: $" << balance2 << "\n\n";

	hackedTransfer(&balance1, &balance2);

	cout << "\tBalance 1: $" << balance1 << endl;
	cout << "\tBalance 2: $" << balance2 << "\n\n";

	cout << "Password Hack:\n";

	cout << "\tPassword: " << password << endl;

	setPassword(password);

	cout << "\tPassword: " << password << endl;

	hackedPassword(&password);

	cout << "\tPassword: " << password << endl;

}

void transferFunds(int account1, int account2)
{
	int temp = account1;
	account1 = account2;
	account2 = temp;
}

void hackedTransfer(int* account1, int* account2)
{
	int temp = *account1;
	*account1 = *account2;
	*account2 = temp;
}

void setPassword(string password)
{
	password = "RegularPassword";
}

void hackedPassword(string* password)
{
	*password = "ha! Password SUccessfully Hacked!";
}