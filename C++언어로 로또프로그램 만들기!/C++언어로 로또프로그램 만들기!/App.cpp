//App.cpp
#include "std.h"


App::App()
{
	con = new Control;
}
App::~App()
{
	delete con;
}

void App::init()
{
	MyPrint::logo();
	/*con.Control();*/
}

void App::run()
{
	while (true)
	{
		system("cls");
		con->printall();
		char ch = MyPrint::menuprint();
		switch (ch)
		{
		case '1': con->insert();	break;
		case '2': con->select_name();	break;
		case '3': con->select_number();	break;
		case '4': con->update();	break;
		case '5': con->remove();		break;
		case '6': return;
		}
		system("pause");
	}
}

void App::exit()
{
	MyPrint::ending();
	//con.~Control();
}


