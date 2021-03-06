#pragma once
#include <string>
#include <iostream>
#include <memory>
using namespace std;

class Pizza
{
public:
	void setDough(const string& dough)
	{
		m_dough = dough;
	}
	void setSauce(const string& sauce)
	{
		m_sauce = sauce;
	}
	void setTopping(const string& topping)
	{
		m_topping = topping;
	}
	void open() const
	{
		cout << "Pizza with " << m_dough << " dough, " << m_sauce << " sauce and "
			<< m_topping << " topping. Mmm." << endl;
	}
private:
	string m_dough;
	string m_sauce;
	string m_topping;
};

