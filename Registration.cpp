#include "Registration.h"

void Registration::setLogin(const string& login)
{
	if (login == " ")
		throw InvalidLogin("Error with setLogin!!!");

	login_ = login;
}

void Registration::setPassword(const string& password)
{
	if (password == " ")
		throw InvalidPassword("Error with setName!!!");
	password_ = password;
}

void Registration::print() const
{
	cout << "-_-_-REGISTRATION PRINT-_-_-" << endl;
	cout << "Login:\t\t" << login_ << endl;
	cout << "Password:\t" << password_ << endl;
	cout << endl;
}

const string& Registration::getLogin() const
{
	return login_;
}

const string& Registration::getPassword() const
{
	return password_;
}

const string& Exception::what() const
{
	return message;
}

void SocialNetwork::registration(string login, string pass)
{
	try
	{
		Registration reg(login, pass);
		for (auto& i : accounts)
		{
			i.getLogin() == login; throw isUserAlready("Login is busy!");
		}
	}
	catch (const exception& exc)
	{
		cout << exc.what() << endl;
	}
}