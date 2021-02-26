#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Exception
{
public:
	Exception(const string& message = "UNKNOWN ERROR!") 
		: message(message)
	{}
	virtual const string& what() const;
private:
	string message;
};

class InvalidPassword : public Exception
{
public:
	InvalidPassword(const string& message = "Error with password!") : Exception(message) {}
};

class InvalidLogin : public Exception
{
public:
	InvalidLogin(const string& message = "Error with login!") : Exception(message) {}
};

class isUserAlready : public Exception
{
public:
	isUserAlready(const string& message = "User is already") : Exception(message) {}
};

class Registration
{
public:
	Registration(const string& login, const string& password)
	{
		setLogin(login);
		setPassword(password);
	}
	void setLogin(const string& login);
	void setPassword(const string& password);
	void print() const;

	const string& getLogin() const;
	const string& getPassword() const;
private:
	string login_;
	string password_;
};

class SocialNetwork : public Registration
{
public:
	SocialNetwork(const string& login, const string& password) : Registration(login, password) {}
	void registration(string login, string pass);
private:
	vector<Registration> accounts;
};