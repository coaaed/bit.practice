//start.cpp
#include "std.h"


int main()
{
	App* app = new App; //MyArr->Control->App

	app->init();
	app->run();
	app->exit();

	delete app;

	return 0;

}