//Control.cpp
#include "std.h"


Control::Control()
{
	myarr = new Myarr;
}
Control::~Control()
{
	delete myarr;
}

void Control::insert()
{
	string name = MyInput::input_string("이름");
	int num = MyInput::input_integer("로또번호");
}
void Control::select_name()
{

}
void Control::select_number()
{

}
void Control::update()
{

}
void Control::remove()
{

}
void Control::printall()
{

}

int Control::nametoidx(string name)
{

}