#pragma once

#include <iostream>
#include <vector>
#include <string>

class clsString
{

private:

	std::string _value;


public:

	clsString()
	{
		_value = "";
	}

	clsString(std::string value)
	{
		this->_value = value;
	}

	void setValue(std::string value)
	{
		this->_value = value;
	}

	std::string getValue()
	{
		return _value;
	}

	__declspec(property(get = getValue, put = setValue)) std::string value;

	std::vector <std::string> splitString(const std::string& delim) const
	{
		std::vector <std::string> vS1;

		if (delim.empty())
		{
			if (!_value.empty())
				vS1.push_back(_value);

			return vS1;
		}

		std::size_t position = 0;
		std::string s1 = _value;

		while ((position = s1.find(delim)) != std::string::npos)
		{
			std::string word = s1.substr(0, position);

			if (!word.empty())
			vS1.push_back(word);

			s1.erase(0, position + delim.length());
		}

		if (!s1.empty())
			vS1.push_back(s1);


		return vS1;
	}

	void printVectorElements(const std::vector<std::string>& vS1) const
	{
		for (const std::string& s : vS1)
			std::cout << s << std::endl;
	}

	static short numOfWordsInString( std::string s1)
	{
		short counter = 0;
		std::string delim = " ";
		size_t position = s1.find(delim);

		while ( (position = s1.find(delim) ) != std::string::npos)
		{
			std::string word = s1.substr(0, position);

			if (!word.empty())
			counter++;

			s1.erase(0, position + delim.length());
		}

		if (!s1.empty())
			counter++;

			return counter;
	}

	short numOfWordsInString()
	{
		return numOfWordsInString(_value);
	}

};

