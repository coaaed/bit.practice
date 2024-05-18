//Control.h
#pragma once
class Control
{
private:
	MyArr* myarr;

public:
	Control();
	~Control();

public:
	void insert();
	void select_name();
	void select_number();
	void update();
	void remove();
	void printall();

private:
	int nametoidx(string name);
	int numbertoidx(int number);


};


#pragma once

