//Control.h
#pragma once
class Control
{
private:
	Myarr* myarr;
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
public:
	int nametoidx(string name);
};

