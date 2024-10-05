#include <iostream>
#include <string>
#include <cctype>
#pragma once
using namespace std;

class Validation
{
public:

	static bool validName(string n)
	{
		int  i = 0;
		while (i <= n.size())
		{
			if (isalpha(n[i]))
				i++;
			else
				break;
		}
		if (i < n.size() || n.size() < 8 || n.size() > 20)
			return false;
		else
			return true;
	}

	static bool validPassword(string p)
	{
		if (p.size() < 8 || p.size() > 20)
			return false;
		else
			return true;
	}

	static bool validSalary(double s)
	{
		if (s < 5000)
			return false;
		else
			return true;
	}
};