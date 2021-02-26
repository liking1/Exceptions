#include <iostream>
#include "Registration.h"
using namespace std;

int main()
{
	try
	{
		SocialNetwork sn("bebra", "12345");
		sn.registration("bebra", "12345");
		sn.print();
	}
	catch (InvalidLogin& il)
	{
		cout << il.what() << endl;
	}
	catch (InvalidPassword& ip)
	{
		cout << ip.what() << endl;
	}
	catch (isUserAlready& iua)
	{
		cout << iua.what() << endl;
	}
}