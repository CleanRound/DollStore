#include "File.h"

struct Account
{
private:
	string login;
	string password;
	double balance;
public:
	void setLogin(string login)
	{
		this->login = login;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	void setBalance(double balance)
	{
		this->balance = balance;
	}
	string getLogin()
	{
		return this->login;
	}
	string getPassword()
	{
		return this->password;
	}
	double getBalance()
	{
		return this->balance;
	}
	Account()
	{
		this->setLogin("");
		this->setPassword("");
		this->setBalance(0.0);
	}
	Account(string login, string password)
	{
		this->setLogin(login);
		this->setPassword(password);
		this->setBalance(0.0);
	}
	~Account() = default;

	bool SignUp(File file)
	{
		file.open(path, ios::app);
		if (file.is_open())
		{
			string login, password;
			cout << "Sign up.." << endl;
			cout << "Enter login: ";
			cin >> login;
			this->setLogin(login);
			cout << "Enter password: ";
			cin >> password;
			this->setPassword(password);
			file << this->getLogin() << " ";
			file << this->getPassword() << " ";
			file << "\n";
			file.close();
			return true;
		}
		else
		{
			return false;
		}
	}
};
