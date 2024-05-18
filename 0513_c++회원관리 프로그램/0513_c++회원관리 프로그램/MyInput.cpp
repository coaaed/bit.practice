//MyInput.cpp
#include "std.h"

int MyInput::input_integer(string msg)
{
	int value;
	cout << msg << ":"; cin >> value;
	return value;
}

string MyInput::input_string(string msg)
{
	string value;
	cout << msg << ":"; cin >> value;
	return value;
}

char MyInput::input_char(string msg)
{
	char value;
	cout << msg << ":"; cin >> value;
	return value;
}

float MyInput::input_float(string msg)
{
	float value;
	cout << msg << ":"; cin >> value;
	return value;
}
